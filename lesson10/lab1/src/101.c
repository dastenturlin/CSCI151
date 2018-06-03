/*
 ============================================================================
 Name        : 101.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	int counter=0;
	do
	{
		x=getchar();
		if(x=='a')counter++;
	}
	while(x!='\n');
	printf("%i", counter);
	return 0;
}
