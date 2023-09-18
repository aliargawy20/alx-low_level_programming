#include "main.h"

/**
 * _strlen - find the lenght of strings
 * @s: string to be counted
 * Return: length of the string
*/
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\n' ; i++)
		count++;
	return (count);



}
