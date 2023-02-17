#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: ' prints the alphabet in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; ; i++)
	{
		putchar(i);
		if (i == 122)
			i -= 58;
		if (i == 90)
			break;
	}
	putchar('\n');
	return (0);
}
