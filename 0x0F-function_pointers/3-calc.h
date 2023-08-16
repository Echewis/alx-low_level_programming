#ifndef CALC_H
#define CALC_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * struct - is a structure operator
 * @operate: is what the struct works with
 * @f: is a pointer to another function
 */
typdef struct operate
{
	char *operate;
	int (*f)(int a, int b);
} op_t;
#endif
