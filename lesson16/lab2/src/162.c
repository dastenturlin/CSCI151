/*
 ============================================================================
 Name        : 162.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void sinApprox(double x, int n)
{
	double sum=1;
	int fact=1;
	for(int i=1; i<=2*n-1; i+=2)
	{
		for(int j=1; j<=i; j++)
		{
			fact=fact*j;
		}
		if(i%4==1)sum=x+pow(x,i)/fact;
		if(i%4==3)sum=x-pow(x,i)/fact;
	}
	printf("%.2f", sum);
}

int main(void) {

	double a;
	int b;

	scanf("%lf %i", &a, &b);
	sinApprox(a,b);

	return 0;
}
