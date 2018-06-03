/*
 ============================================================================
 Name        : 165.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


_Bool isIdeal(int n)
{
	int sum=0;
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)return 1;
	else return 0;
}

int main(void) {

	int n;
	scanf("%i", &n);

	if(isIdeal(n)==1)
		printf("ideal");
	else printf("not ideal");
	return 0;
}
