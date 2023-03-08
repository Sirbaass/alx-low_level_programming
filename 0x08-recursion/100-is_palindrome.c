#include "main.h"

/**
* find_strlen - Returns the length of a string.
* @s: The string to be measured.
*
* Return: The length of the string.
*/
int find_strlen(char *s)
{
	int len = 0;

	while (*(s + len))

	len++;
	return (len);
}

/**
* check_palindrome - Recursive function to check if a string is a palindrome.
* @s: The string to be checked.
* @len: The length of the string.
* @index: The current index being checked.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int check_palindrome(char *s, int len, int index)
{
	if (index >= len / 2)
	return (1);
	if (*(s + index) != *(s + len - index - 1))
	return (0);
	return (check_palindrome(s, len, index + 1));
}

/**
* is_palindrome - Determines if a string is a palindrome.
* @s: The string to be checked.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
	int len = find_strlen(s);
			return (check_palindrome(s, len, 0));

}

