/*
* File: 2-strlen_recursion.c
* Auth: uforo
*/

#include "main.h"

/**
* _strlen_recursion - Returns the length of a string.
* @s: The string is measured.
*
* Return: the length of the string.
*/
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
