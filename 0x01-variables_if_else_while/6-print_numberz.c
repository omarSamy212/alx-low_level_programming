#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Write a program that prints all single digit
 * numbers of base 10 starting from 0 using putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	printf("\n");
	return (0);
}
