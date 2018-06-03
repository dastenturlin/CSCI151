/*
 ============================================================================
 Name        : 181.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

double power(double x, int n)
{
	if(n == 0)
	{
		return 1.0;
	}
	if (n < 0)
	{
		return power(x, n+1)/x;
	}
	if (n > 0)
	{
		return power(x, n-1)*x;
	}
}
int main()
{
	double a=3;
	int b=5;
	double c=power(a,b);
	printf("%.2f", c);
	return 0;
}

