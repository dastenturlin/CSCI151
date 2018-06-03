/*
 ============================================================================
 Name        : celsiustofahr.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	for(double i=-50; i<=40; i++)
	{
		printf("%f ", i);
		double f=i*1.8+32;
		printf("%f\n", f);
		f=0;
	}
	return 0;
}
