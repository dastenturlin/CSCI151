/*
 ============================================================================
 Name        : 103.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int counter=0;
	char x;
		do
			{
				x=getchar();
				//counter++;
				if((x==' ')||(x=='\n'))
				{
				if(counter==0)continue;
				printf("%i\n", counter);
				counter=0;
				}
				else counter++;
			}
		while(x!='\n');
		printf("Done.");

		return 0;
}