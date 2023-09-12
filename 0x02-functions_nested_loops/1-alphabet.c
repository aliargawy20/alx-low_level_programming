#include "main.h"

/**
 * print_alphabet -function to print alphabets in lower
 *
 * Return: always (0);
 */
void print_alphabet(void);
{
	char l;

	for (l = 'a' ; l <= 'z' ++1)
		_putchar(l);
	_putchar('\n');

}
