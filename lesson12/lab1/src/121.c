/*
 ============================================================================
 Name        : 121.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//printf("0");

	int fact[10];
	fact[0]=1;
	printf("%i ", fact[0]);
	int res=1;
	for(int i=1; i<=9; i++)
	{
		res=res*i;
		fact[i]=res;
		printf("%i ", fact[i]);
	}
	return 0;
}
