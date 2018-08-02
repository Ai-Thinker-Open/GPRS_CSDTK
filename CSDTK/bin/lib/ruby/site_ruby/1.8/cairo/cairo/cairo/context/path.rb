module Cairo
  class Context
    module Path
      module Point
        module_function
        def distance(a, b)
          ax, ay = a
          bx, by = b
          Math.sqrt((bx - ax) ** 2 + (by - ay) ** 2)
        end
      end

      def transform_path(path, &block)
        save do
          new_path
          path.each do |type, points|
            case type
            when PATH_CURVE_TO
              curve_to(*points.collect(&block).flatten)
            when PATH_MOVE_TO
              move_to(*points.collect(&block).flatten)
            when PATH_LINE_TO
              line_to(*points.collect(&block).flatten)
            when PATH_CLOSE_PATH
              close_path
            end
          end
          copy_path
        end
      end

      def map_path_onto(path)
        parameterized_path = parameterize_path(path)
        transformed_path = transform_path(copy_path) do |x, y|
          current_point = nil
          d = x
          i = -1
          type = points = nil
          path.each do |type, points|
            i += 1
            break if d <= parameterized_path[i]
            d -= parameterized_path[i]
            case type
            when PATH_MOVE_TO
              current_point = points[0]
            when PATH_LINE_TO
              current_point = points[0]
            when PATH_CURVE_TO
              current_point = points[2]
            when PATH_CLOSE_PATH
            end
          end

          case type
          when PATH_MOVE_TO
            [x, y]
          when PATH_LINE_TO
            ratio = d / parameterized_path[i]
            current_x, current_y = current_point
            lx, ly = points[0]
            new_x = current_x * (1 - ratio) + lx * ratio
            new_y = current_y * (1 - ratio) + ly * ratio
            dx = -(current_x - lx)
            dy = -(current_y - ly)

            ratio = y / parameterized_path[i]
            [new_x + -dy * ratio, new_y + dx * ratio]
          when PATH_CURVE_TO
            ratio = d / parameterized_path[i]
            current_x, current_y = current_point
            cx0, cy0 = points[0]
            cx1, cy1 = points[1]
            cx2, cy2 = points[2]

            new_x = current_x * (1 - ratio) * (1 - ratio) * (1 - ratio) +
                    3 * cx0   * (1 - ratio) * (1 - ratio) * ratio +
                    3 * cx1   * (1 - ratio) *      ratio  * ratio +
                        cx2   *      ratio  *      ratio  * ratio
            new_y = current_y * (1 - ratio) * (1 - ratio) * (1 - ratio) +
                    3 * cy0   * (1 - ratio) * (1 - ratio) * ratio +
                    3 * cy1   * (1 - ratio) *      ratio  * ratio +
                        cy2   *      ratio  *      ratio  * ratio

            dx = -3 * current_x * (1 - ratio) * (1 - ratio) +
                  3 * cx0       * (1 - 4 * ratio + 3 * ratio * ratio) +
                  3 * cx1       * (    2 * ratio - 3 * ratio * ratio) +
                  3 * cx2       *      ratio  * ratio
            dy = -3 * current_y * (1 - ratio) * (1 - ratio) +
                  3 * cy0       * (1 - 4 * ratio + 3 * ratio * ratio) +
                  3 * cy1       * (    2 * ratio - 3 * ratio * ratio) +
                  3 * cy2       *      ratio  * ratio

            ratio = y / Math.sqrt(dx ** 2, dy ** 2)

            [new_x + -dy * ratio, new_y + dx * ratio]
          when PATH_CLOSE_PATH
            [x, y]
          end
        end
        new_path
        append_path(transformed_path)
      end

      private
      def parameterize_path(path)
        current_point = nil
        path.collect do |type, points|
          result = 0
          case type
          when PATH_MOVE_TO
            current_point = points[0]
          when PATH_LINE_TO
            result = Point.distance(current_point, points[0])
            current_point = points[0]
          when PATH_CURVE_TO
            result = Point.distance(current_point, points[0])
            result += Point.distance(points[0], points[1])
            result += Point.distance(points[1], points[2])
            current_point = points[2]
          when PATH_CLOSE_PATH
          end
          result
        end
      end
    end
  end
end
