/*
 ============================================================================
 Name        : 083.c
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

		//scanf("%i", &n);
		//printf("%i = ", n);
        int m=1;
		do
		{
			scanf("%i", &n);
			printf("%i = ", n);
			int i=0;
			do
					 {
					 int bit = n % 16;
					 n = n / 16;

					 int rem=bit+55;

					 if(bit>=10)
					 {
						 if(n==0)
						 		 {
						 			 printf("(%c*16^%i)", rem, i);
						 		 }
						 		 else printf("(%c*16^%i) + ", rem, i);
						 	     i++;
					 }

					 else
					 {
						 if(n==0)
						         {
						 			 printf("(%i*16^%i)", bit, i);
						 		 }
						 		 else printf("(%i*16^%i) + ", bit, i);
						 	     i++;
					 }

					 }
					 while (n > 0);
			printf("\nDone.\n");
		}
		while(m>0);
		return 0;
}
