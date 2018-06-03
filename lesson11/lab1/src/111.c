/*
 ============================================================================
 Name        : 111.c
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

	FILE *filein;
	FILE *fileout;
	char i[100], o[100];

	scanf("%s %s", i, o);

	filein = fopen(i, "w");
	fileout = fopen(o, "w");

	if (filein == NULL) {
			printf("Problem opening infile.");
			return 1;
		}
	if (fileout == NULL) {
			printf("Problem opening outfile.");
			return 2;
		}
    printf("Everything done okay.");

	fprintf(filein, "MIDTERMS ARE COMING");

	fclose(filein);
	filein = fopen(i, "r");


	char x;
	do
	{
		x = getc(filein);
		putc(x, fileout);
	}
	while(!feof(filein));

    fclose(filein);
    fclose(fileout);

	return 0;
}
