/*
 ============================================================================
 Name        : sineapp.c
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
	 double x;
	 scanf("%lf", &x);

	 double a;

	 //everything is expressed in radians!!!!
	 double y = (pow(x,3))/6;
	 double z = (pow(x,5))/120;

	 a = x-y+z;


	 printf("%f", a);
	 return 0;
}