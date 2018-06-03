/*
 ============================================================================
 Name        : 185.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
long choose(int n, int k)
{
	if ((k-1)==0)
	{

		return n;
	}
	else
	{
		return choose(n,k-1)*(n-k+1)/k;
	}
}

int main ()
	{
	int a = choose(5,2);
	printf("%i", a);
	return 0;
}
