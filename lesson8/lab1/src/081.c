/*
 ============================================================================
 Name        : 081.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);


	int num;
	//scanf("%i", &num);
    int square;

    do
	{
    	    scanf("Enter your number");
      	scanf("%i", &num);
        square = num * num;
		printf("Your number is %i\n", square);
    }
    while(num>0);

    printf("Done.");
	return 0;
}
