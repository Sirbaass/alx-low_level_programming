#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: The size of the array
* @c: the value to initialize the array with
*
* Return: pointer to the created array or NULL if size is 0
*/
char *create_array(unsigned int size, char c)
{
	/* function implementation*/
}
	{unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}

