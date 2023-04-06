#include "main.h"
/**
 * _sqrt - this function Finds the natural
 *            square root of an inputted number.
 * @n: The number to find the square root of.
 * @r: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int _sqrt(int n, int r)
{
	if ((r * r) == n)
		return (r);

	if (r == n / 2)
		return (-1);

	return (_sqrt(n, r + 1));
}


/**
 * _sqrt_recursion - this function Returns the natural
 *              square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt(n, root));
}
