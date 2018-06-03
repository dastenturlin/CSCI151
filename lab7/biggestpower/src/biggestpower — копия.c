/*
 ============================================================================
 Name        : biggestpower.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%i", &n);

	int pow=2;
    int k=0;
	while(pow<=n)
	{
		pow=pow*2;
		k++;
	}
	printf("%i", k);
	return 0;
}
