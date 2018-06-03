/*
 ============================================================================
 Name        : 211.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *file;
	file = fopen("input.txt", "r");

	char str[81];
	int c = 0;

	while(!feof(file)){
		fscanf(file, "%s", str);
		printf("%s ", str);
		c+=atoi(str);


	}

	printf("\n%i", c);

	fclose(file);
	return 0;
}
