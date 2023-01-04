#include"main.h"
#include<stdio.h>

/*
* Authar : Salma Wagdy
* Description : Here is a recursive function in C that prints a string
* Return : value
*/

void _puts_recursion(char *s)
{
char s[] = "First, solve the problem. Then, write the code";
	if (*s == '\0')
	{
	printf("\n");
	return;
	}
	putchar(*s);
	_puts_recursion(s++);
}
