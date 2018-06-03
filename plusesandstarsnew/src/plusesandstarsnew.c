/*
 ============================================================================
 Name        : plusesandstarsnew.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	for(int i=0; i<=5; i++)
	{
		for(int j=5; j>=i+1; j--)
		{
			printf("+");
		}
		for(int k=5-i; k<5; k++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
