#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int d, p;

	for (d = '0'; d < '99'; d++)
	{
		/*if (d != 99)*/
		for (p = d + 1; p <= '99'; p++)
		{
			if (p != d)
			{
				putchar(d);
				putchar(p);
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');

	return (0);
}
