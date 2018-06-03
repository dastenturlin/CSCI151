/*
 ============================================================================
 Name        : 091.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double a;
	scanf("%lf", &a);

	if(a>=95)
	{
		printf("A");

	}
	else if (a>=90)
	    {
		    printf("A-");
	    }
	else if (a>=85)
	    {
			printf("B+");
		}
	else if (a>=80)
		{
			printf("B");
		}
	else if (a>=75)
		{
			printf("B-");
		}
	else if (a>=70)
		{
			printf("C+");
		}
	else if (a>=65)
		{
			printf("C");
		}
	else if (a>=60)
		{
			printf("C-");
		}
	else if (a>=55)
		{
			printf("D");
		}
	else printf("F");
return 0;
}
