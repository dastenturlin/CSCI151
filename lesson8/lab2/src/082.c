/*
 ============================================================================
 Name        : 082.c
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
	int i=0;
	//scanf("%i", &n);
	//printf("%i = ", n);
    int m;
	do
	{
		scanf("%i", &n);
		printf("%i = ", n);
		m=n;
		int i=0;
		do
			 {
			 int bit = n % 8;
			 n = n / 8;

			 if(n==0)
			 {
				 printf("(%i*8^%i)\n", bit, i);
			 }
			 else printf("(%i*8^%i) + ", bit, i);
		     i++;
			 }
			 while (n > 0);
	}
	while(m>0);

     printf("\nDone.\n");

	return 0;
}
