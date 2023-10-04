#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	char *duplicate1;
	char *duplicate2;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	duplicate1 = malloc(strlen(s1) + 1);
	duplicate2 = malloc(strlen(s2) + 1);
	if (duplicate1 == 0 || duplicate2 == 0)
		return (NULL);
	strcpy(duplicate1, s1);
	return (duplicate1);
	strcpy(duplicate2, s2);
	return (duplicate2);

}
