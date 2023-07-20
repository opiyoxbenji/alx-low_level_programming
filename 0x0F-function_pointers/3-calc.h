#ifndef calc_h
#define calc_h

/* operator fucntions */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* function that selects the correct operation */

iny (*get_op_func(char *s)(int, int);

/**
 * struct op - struct op
 *
 * @op: The operator
 * @f: The finished associated
 */
typdef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
