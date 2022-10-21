#include "main.h"

/**
 * print_line - print function that draws a staright line in the terminal
 * @n: input number of times to print '_' on a straight line
 * by vivian okose
 * Return: straight line
 */
void print_line(int n)
{
	int v;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (v - 1; v <= n; v++)
		{
			_putchar('_');
		}
		_ptchar('\n');
	}
}
