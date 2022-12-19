#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
		{
			char alpha = 'a';

			while (alpha <= 'z')
			{
				_putchar(alpha);
				alpha++;
			}
			i++;
			_putchar('\n');
		}
		_putchar('\n');
}
