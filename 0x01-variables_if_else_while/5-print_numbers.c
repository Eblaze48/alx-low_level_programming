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
	int d;

	for (d = 0; d < 10; d++)
	{
/*		putchar((d / 10));*/
		putchar((d % 10) + '0');
		if (d != 9)
		{
			/*putchar(',');*/
			/*putchar(' ');*/
		}
	}
	putchar('\n');

	return (0);
}
