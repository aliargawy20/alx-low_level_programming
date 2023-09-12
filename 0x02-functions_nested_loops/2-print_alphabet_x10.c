#include "main.h"
/**
 * print_alphabet_x10 - funcation that prints 10 times the alphabet
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j = j + 1)
			_putchar(j);


	}
	_putchar('\n');

}
