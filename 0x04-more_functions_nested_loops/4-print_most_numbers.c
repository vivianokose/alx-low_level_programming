#include "main.h"

/**
 * print_most_numbers - print function of nummbers
 * by vivian okose
 * Return: void
 */

void print_most_numbers(void)
{
	int v;

	for (v = '0'; v <= '9'; v++)
	{
		if (!(v == '2' || v == '4'))
			_putchar(v);
	}
	_putchar('\n');
}
