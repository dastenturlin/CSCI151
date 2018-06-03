/*
 ============================================================================
 Name        : 092.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n=100;
	scanf("%i", &n);

	for(int i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{
			printf("%i ", i);
		}
	}
	return 0;
}
