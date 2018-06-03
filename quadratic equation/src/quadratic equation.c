/*
 ============================================================================
 Name        : quadratic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    setvbuf(stdout, NULL, _IONBF, 0);

	double a;
	double b;
	double c;

	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

	double delta = sqrt(b*b-4*a*c);

	double root1 = (-b + delta)/2/a;
	double root2 = (-b - delta)/2/a;

	printf("%f\n", root1);
	printf("%f", root2);

	return 0;
}
