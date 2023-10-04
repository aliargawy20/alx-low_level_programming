#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of chars
  * @size: The size of the array
  * @c: The char to stored in the array
  *
  * Return: The array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == 0)
		return (NULL);
	for (i = 0; i < size; ++i)
		array[i] = c;
	return (array);

}