#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	if (alpha == 'e')
		continue;
	if (alpha == 'q')
		continue;
	putchar('\n');
	return (0);
}
