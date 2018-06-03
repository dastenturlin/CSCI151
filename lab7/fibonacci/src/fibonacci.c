/*
 ============================================================================
 Name        : fibonacci.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n=3;
	int f1=0;
	int f2=1;
	int fnext;
	printf("%i %i", f1, f2);
	while(n<=20)
	{
		fnext=f2+f1;
		printf("%i ", fnext);

		f1=f2;
		f2=fnext;
        n++;
	}
}
