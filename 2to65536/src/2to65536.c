/*
 ============================================================================
 Name        : 2to65536.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	for(int i=2; i<=65536; i=i*2)
	{
		printf("%i ", i);
	}
	return 0;
}
