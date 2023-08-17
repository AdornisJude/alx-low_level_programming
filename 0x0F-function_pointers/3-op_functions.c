#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - the sum function
* @a: first input
* @b: second input
* Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - the minus function
* @a: first input
* @b: second input
* Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - the product function
* @a: first input
* @b: second input
* Return:product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - the quotient function
* @a: first input
* @b: second input
* Return:quotient
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - the remainder function
* @a: first input
* @b: second input
* Return:reminader after division
*/
int op_mod(int a, int b)
{
	return (a % b);
}
