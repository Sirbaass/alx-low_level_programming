/*
* File: 3-factorial.c
* Auth: uforo
*/

#include "main.h"

/**
* _factorial - Returns the factorial of a given number.
* @n: The number to find the factorial of.
*
* Return: if n > o, the factorial of n.
*		if n < 0 - 1 to indicate an error.
*/
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

		else if (n >= 0 && n <= 1)
		return (1);

}
