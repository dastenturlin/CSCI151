/*
 ============================================================================
 Name        : powersof2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int j=1;
	for(int i=2; i<=65536; i*=2)
	{

	printf("%i ", j);
	printf("%i\n", i);
	j++;
    }

	return 0;
}
