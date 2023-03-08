#include "main.h"

/**
* strlen_no_wilds - Returns the length of a string
* without counting wildcard characters.
* @str: The string to be measured.
*
* Return: The length of the string.
*/
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	while (*(str + index))
	{
	if (*(str + index) != '*')
	len++;
	index++;
	}
	return (len);
}

/**
* iterate_wild - Moves a wildcard string pointer to the
* next non-wildcard character.
* @wildstr: A pointer to a wildcard string pointer.
*/
void iterate_wild(char **wildstr)
{
	while (**wildstr == '*')
	(*wildstr)++;
}

/**
* postfix_mtch - Matches the postfix of a string to a
* postfix string.
* @str: The string to match.
* @postfix: The postfix to match.
*
* Return: A pointer to the start of the matched postfix
* in str or NULL if no match is found.
*/
char *postfix_mtch(char *str, char *postfix)
{
int str_len = strlen(str);
int postfix_len = strlen(postfix);
if (postfix_len > str_len)
return (NULL);
	return (strstr(str + str_len - postfix_len, postfix));
}

/**
* wildcmp - Compares two strings allowing for wildcard
* characters '*' to match any number of characters.
* @s1: The first string to compare.
* @s2: The second string to compare, which may contain
* wildcard characters '*'.
*
* Return: 1 if the strings match, 0 otherwise.
*/
int wildcmp(char *s1, char *s2)
{
char *s1_curr = s1;
char *s2_curr = s2;
char *s1_postfix = NULL;
char *s2_postfix = NULL;
iterate_wild(&s2_curr);

while (*s1_curr)
	{
	if (*s2_curr == '*')
	{
		iterate_wild(&s2_curr);
		if (!*s2_curr)
		return (1);
	s1_postfix = s1_curr;
	s2_postfix = s2_curr;
	}
	else if (*s1_curr != *s2_curr)
	{
		if (!s2_postfix)
		return (0);
	s1_curr = ++s1_postfix;
	s2_curr = s2_postfix;
	}
	else
	{
		s1_curr++;
		s2_curr++;
	}
	}
	return (!*s2_curr);
}

