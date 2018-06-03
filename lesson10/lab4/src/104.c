/*
 ============================================================================
 Name        : 104.c
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
	int max=0;
	char x;
		do
			{
				x=getchar();
				//counter++;
				if((x==' ')||(x=='\n'))
				{
				if(counter==0)continue;
				//printf("%i\n", counter);

				if(max<counter)max=counter;
				counter=0;
				}
				else counter++;
			}
		while(x!='\n');
		printf("%i", max);

		return 0;
}
