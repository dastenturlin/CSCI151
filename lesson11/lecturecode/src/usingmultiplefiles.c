#include <stdio.h>

int main() {

	FILE *infile;
	FILE *outfile;
	infile  = fopen("records.txt", "r");
	outfile = fopen("output.txt", "w");

	if (infile == NULL || outfile == NULL) {
		printf("Problem opening files.");
		return 1;
	}

	printf("Files opened successfully.");

	char name[81];
	int age, id;

	do {
		fscanf(infile, "%s %i %i", name, &age, &id);
		fprintf(outfile, "Record: %s, %i, %i \n", name, age, id);

		printf("Record: %s, %i, %i \n", name, age, id);

	} while (!feof(infile));

	fclose(infile);
	fclose(outfile);

    return 0;
}
