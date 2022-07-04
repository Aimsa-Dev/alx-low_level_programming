#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Task 3 prints the alphabet in lower, and uppercase
 *followed by a new line
 *
 *Return: 0
 **/
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
	putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
	putchar(ch);
	}
	putchar(10); /* this is the ACII code for new line*/
	return (0);
}
