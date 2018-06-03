/*
 ============================================================================
 Name        : 102.c
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
	do
		{
			x=getchar();
			if((x>=97)&&(x<=122))
			{
				int i=x-32;
				printf("%c", i);
			}
			else printf("%c", x);
		}
	while(x!='\n');

return 0;

}
