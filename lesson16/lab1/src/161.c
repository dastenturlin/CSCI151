/*
 ============================================================================
 Name        : 161.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void expApprox(double x, int n)
{
	double sum=1;
	int fact=1;
	for(int i=1; i<=n-1; i++)
	{
		for(int j=1; j<=i; j++)
		{
			fact=fact*j;
		}
		sum=sum+pow(x,i)/fact;
	}
	printf("%.2f", sum);
}

int main(void) {

	double a;
	int b;

	scanf("%lf %i", &a, &b);
	expApprox(a,b);

	return 0;
}
