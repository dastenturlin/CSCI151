/*
 ============================================================================
 Name        : conversion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double length=10000.001;

	printf("%f\n", length*100);
	printf("%f\n", length/10000);
	printf("%f\n", length*39,3701);
	printf("%f\n", length*0.000621371);
	printf("%f\n", length*0.00497096);
}
