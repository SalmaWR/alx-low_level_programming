#include"main.h"
#include<stdio.h>

/*
* Authar : Salma Wagdy
* Description : Here is a recursive function in C that prints a string
* Return : value
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	printf("\n");
	return;
	}
	putchar(*s);
	_puts_recursion(s++);
}

int main() 
{
   char *s = "First, solve the problem. Then, write the code";
   _puts_recursion(s);
   return 0;
}
