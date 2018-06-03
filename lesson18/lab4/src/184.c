/*
 ============================================================================
 Name        : 184.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printBinary(int n)
{

	if(n==0)
	{
		return;
	}
	else
	{
		printBinary(n/2);
		printf("%i", n%2);
	}
}

int main()
{
	printBinary(31);
	return 0;
}
