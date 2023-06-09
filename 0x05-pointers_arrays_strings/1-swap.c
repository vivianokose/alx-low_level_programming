#include "main.h"

/**
 *  * swap_int - swaps the value of int a and int b
 *   * @a: first int to be swap
 *    * @b: second int to be swap
 *     *
 *      * Return: 0
 *       */
void swap_int(int *a, int *b)
{
		int c;

		c = *a;
		*a = *b;
		*b = c;
}
