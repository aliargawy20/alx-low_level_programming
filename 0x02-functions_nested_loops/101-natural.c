#include "main.h"
/**
 * main - Entry point
 * Description: computes the sum of all
 *              the multiplesmof 3 or 5
 *              below 1024 (excluded)
 * Return: Always 0 (success)
*/
int main(void)
{
	int sum = 0;
	int num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;

	}
	prinrf("%d\n", sum);

	return (0);
}
