/**
* find_sqrt - finds the natural square root of an inputed number.
* @num: The number to find the square root of.
* @root: The root to be tested.
*
* Return: If the number has a natural square root - the square root.
*         if the number does not have a natural root - -1.
*/
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	return (root);
	else if ((root * root) > num)
	return (-1);
	else
	return (find_sqrt(num, root + 1));
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to return the square root of.
*
* Return: The square root of n.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
	else
	return (find_sqrt(n, 0));
}

