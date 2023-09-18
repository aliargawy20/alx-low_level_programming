#include "main.h"

/**
 * _strlen - find the lenght of strings
 * @s: string to be counted
 * Return: length of the string
*/
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\n' ; s++)
		count++;
	return (count);



}
