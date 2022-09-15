#include "main.h"

/**
 * print_alphabet - use putchar twice
 *
 *Return: Always 0
 */

void print_alphabet(void)
{
	int fa;

	for (fa = 'a'; fa <= 'z'; fa++)
	{
		_putchar(fa);
		_putchar('\n');
	}

}

