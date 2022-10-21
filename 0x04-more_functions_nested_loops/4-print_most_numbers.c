#include "main.h"

/**
 * print_most_numbers - print function that prints numbers, from 0 to 9
 * by vivian okose
 *
 * Return void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i == '2') || (i == '4'))
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
