#ifndef CLOOG_CLAST_H
#define CLOOG_CLAST_H
#if defined(__cplusplus)
extern "C" 
  {
#endif 

enum clast_expr_type { expr_term, expr_bin, expr_red };

struct clast_expr {
    enum clast_expr_type type;
};

struct clast_term {
    struct clast_expr	expr;
    Value		val;
    const char *	var;
};

enum clast_red_type { clast_red_sum, clast_red_min, clast_red_max };
struct clast_reduction {
    struct clast_expr	expr;
    enum clast_red_type	type;
    int			n;
    struct clast_expr*	elts[1];
};

enum clast_bin_type { clast_bin_fdiv, clast_bin_cdiv, 
		      clast_bin_div, clast_bin_mod };
struct clast_binary {
    struct clast_expr	expr;
    enum clast_bin_type type;
    struct clast_expr*	LHS;
    Value		RHS;
};

struct clast_stmt;
struct clast_stmt_op {
    void (*free)(struct clast_stmt *);
};

#define CLAST_STMT_IS_A(stmt, type) ((stmt)->op == &(type))

extern struct clast_stmt_op stmt_root;
extern struct clast_stmt_op stmt_ass;
extern struct clast_stmt_op stmt_user;
extern struct clast_stmt_op stmt_block;
extern struct clast_stmt_op stmt_for;
extern struct clast_stmt_op stmt_guard;

struct clast_stmt {
    struct clast_stmt_op    *op;
    struct clast_stmt	*next;
};

struct clast_root {
    struct clast_stmt	stmt;
    CloogNames *	names;       /**< Names of iterators and parameters. */
};

struct clast_assignment {
    struct clast_stmt	stmt;
    const char *	LHS;
    struct clast_expr *	RHS;
};

struct clast_block {
    struct clast_stmt	stmt;
    struct clast_stmt *	body;
};

struct clast_user_stmt {
    struct clast_stmt	stmt;
    CloogStatement *	statement;
    struct clast_stmt *	substitutions;
};

struct clast_for {
    struct clast_stmt	stmt;
    const char *	iterator;
    struct clast_expr *	LB;
    struct clast_expr *	UB;
    Value		stride;
    struct clast_stmt *	body;
};

struct clast_equation {
    struct clast_expr *	LHS;
    struct clast_expr *	RHS;
    int			sign;
};

struct clast_guard {
    struct clast_stmt	stmt;
    struct clast_stmt *	then;
    int			n;
    struct clast_equation	eq[1];
};


struct clast_stmt *cloog_clast_create(CloogProgram *program,
				      CloogOptions *options);
void cloog_clast_free(struct clast_stmt *s);

struct clast_term *new_clast_term(Value c, const char *v);
struct clast_binary *new_clast_binary(enum clast_bin_type t, 
				      struct clast_expr *lhs, Value rhs);
struct clast_reduction *new_clast_reduction(enum clast_red_type t, int n);
struct clast_root *new_clast_root(CloogNames *names);
struct clast_assignment *new_clast_assignment(const char *lhs,
					      struct clast_expr *rhs);
struct clast_user_stmt *new_clast_user_stmt(CloogStatement *stmt, 
						struct clast_stmt *subs);
struct clast_block *new_clast_block(void);
struct clast_for *new_clast_for(const char *it, struct clast_expr *LB, 
				struct clast_expr *UB, Value stride);
struct clast_guard *new_clast_guard(int n);

void free_clast_term(struct clast_term *t);
void free_clast_binary(struct clast_binary *b);
void free_clast_reduction(struct clast_reduction *r);
void free_clast_expr(struct clast_expr *e);
void free_clast_stmt(struct clast_stmt *s);

int clast_expr_equal(struct clast_expr *e1, struct clast_expr *e2);

#if defined(__cplusplus)
  }
#endif 
#endif /* define _H */
