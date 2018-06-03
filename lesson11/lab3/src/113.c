/*
 ============================================================================
 Name        : 113.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	FILE *val;
	FILE *sto;
	FILE *fin;

	char name[60];
	scanf("%s", name);


	val = fopen("values.txt", "r");
	sto = fopen("story.txt", "r");
	fin = fopen(name, "w");

	if (val == NULL || sto == NULL || fin == NULL)
	{
		printf("Problem opening infile.");
		return 1;
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
			fprintf(fin, "%s", dollar);
			//continue;
		}
		else putc(word, fin);
	}


	close(val);
	close(sto);
	close(fin);
	return 0;

	}
