/*
 ============================================================================
 Name        : example.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

  #include <stdlib.h>

int main() {

	FILE *file;
	file = fopen("datafile.txt", "w");

	if (file == NULL) {
		printf("Problem opening file.");
		return 1;
	}

	printf("PRINTF IS TO PRINT TEXT DIRECTLY INTO THE CONSOLE");

	fprintf(file, "FPRINTF IS TO DO SO INTO THE TEXTFILE");

	fclose(file);

    return 0;
}
