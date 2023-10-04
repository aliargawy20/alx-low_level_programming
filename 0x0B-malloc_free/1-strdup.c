#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == 0)
		return (NULL);
	duplicate = malloc(strlen(str) + 1);
	if (duplicate == 0)
		return (NULL);
	strcpy(duplicate, str);
	return (duplicate);

}
