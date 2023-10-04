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
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2) 
{
	int len1;
	int len2;
	char *concatenated;

	if (s1 == NULL)
        s1 = "";

	if (s2 == NULL)
        s2 = "";


	len1 = strlen(s1);
	len2 = strlen(s2);

	concatenated = malloc((len1 + len2 + 1) * sizeof(char));
	if (concatenated == NULL)
	return NULL;


	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return concatenated;
}
