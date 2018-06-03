/*
 ============================================================================
 Name        : 1811.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
double power(double x, int n)
	{

	if (n%2==0 && n!=0)
	{
		double k = power(x, n/2);
		return k*k;
	}
	else if (n%2==1 && n!=1)
	{
		double k = power(x, n/2);
		return k*k*x;
	}
	else if (n==1)
	{
		//double k = power(x, n/2);
		return x;
	}
	else
	{
		return 1;
	}
}

int main ()
{
	double a=3.0;
	int b=5;
	double c=power(a,b);
	printf("%.2f", c);
	return 0;
}
