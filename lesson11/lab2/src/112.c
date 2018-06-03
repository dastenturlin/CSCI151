/*
 ============================================================================
 Name        : 112.c
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

	FILE *val;
	FILE *sto;

	val = fopen("values.txt", "r");
	sto = fopen("story.txt", "r");

	if (val == NULL)
	{
		printf("Problem opening infile.");
		return 1;
	}
	if (sto == NULL)
	{
		printf("Problem opening outfile.");
		return 2;
	}
    printf("Everything done okay.");

	char word;
	char dollar[80];


	while(!feof(sto))
	{
		word = getc(sto);
		if(word=='$')
		{
			fscanf(val, "%s", dollar);
			printf("%s", dollar);
			//continue;
		}
		else putchar(word);
	}


	close(val);
	close(sto);
	return 0;

	}

