module Fox
  class FXApp

    alias addChoreOrig		addChore # :nodoc:
    alias removeChoreOrig	removeChore # :nodoc:
    alias hasChoreOrig?		hasChore? # :nodoc:

    #
    # Add a idle processing message to be sent to a target object when
    # the system becomes idle, i.e. when there are no more events to be processed.
    # There are several forms for #addChore; the original form (from FOX)
    # takes two arguments, a target object and a message identifier:
    #
    #     app.addChore(tgt, sel)
    #
    # If a chore with the same target and message already exists, it will be rescheduled.
    #
    # A second form takes a Method instance as its single argument:
    #
    #     app.addChore(mthd)
    #
    # For this form, the method should have the standard argument list
    # for a FOX message handler. That is, the method should take three
    # arguments, for the message _sender_ (an FXObject), the message _selector_,
    # and the message _data_ (if any).
    #
    # The last form takes a block:
    #
    #     app.addChore() { |sender, sel, data|
    #         ... handle the chore ...
    #     }
    #
    # All of these return a reference to an opaque FXChore instance that
    # can be passed to #removeChore if it is necessary to remove the chore
    # before it fires.
    #
    def addChore(*args, &block)
      tgt, sel = nil, 0
      if args.length > 0
        if args[0].respond_to? :call
          tgt = FXPseudoTarget.new
	  tgt.pconnect(SEL_CHORE, args[0], block)
        else
	  tgt, sel = args[0], args[1]
        end
      else
        tgt = FXPseudoTarget.new
	tgt.pconnect(SEL_CHORE, nil, block)
      end
      addChoreOrig(tgt, sel)
      return { :target => tgt, :selector => sel }
    end

    #
    # Remove idle processing message identified by _tgt_ and _sel_.
    # See the documentation for #hasChore? for an example of how to use
    # the #removeChore method.
    #
    def removeChore(*args)
      if args.length == 2
        removeChoreOrig(args[0], args[1])
      else
        hsh = args[0]
        removeChoreOrig(hsh[:target], hsh[:selector])
      end
    end

    #
    # Return +true+ if given chore has been set, otherwise return +false+.
    #
    # For example, you might set up a chore at some point in the execution:
    #
    #     chore = app.addChore { ... }
    #
    # but decide that you want to "cancel" that chore later (before it's had a chance to run):
    #
    #     if app.hasChore?(chore)
    #       app.removeChore(chore)
    #     end
    #
    def hasChore?(*args)
      if args.length == 2
        hasChoreOrig?(args[0], args[1])
      else
        hsh = args[0]
        hasChoreOrig?(hsh[:target], hsh[:selector])
      end
    end

  end
end
