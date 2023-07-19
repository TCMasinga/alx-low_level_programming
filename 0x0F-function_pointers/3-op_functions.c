#include "3-calc.h"

/**
 * op_add -  returns the sum of a and b
 * @a: first value
 * @b: second value
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - returns the difference of a and b
 * @a: first value
 * @b: second value
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Returns the product of a and b
* @a: first value
* @b: second value
* Return: The product of a and b.
*/

int op_mul(int a, int b)
{
	return (a * b);
}


/**
* op_div - Returns the division of a and b
* @a: first value
* @b: second value
* Return: The quotient of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}


/**
* op_mod - Returns the remainder of the division of a and b
* @a: first value
* @b: second value
* Return: The remainder of a by b.
*/

int op_mod(int a, int b)
{
	return (a % b);
}
