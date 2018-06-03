/*
 ============================================================================
 Name        : power.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	double x;
	double n;


	scanf("%lf", &x);
    scanf("%lf", &n);

	double pow=1;
	for(int i=1; i<=n; i++)
	{
		pow = pow * x;
	}

	printf("%f", pow);
	return 0;
}
