/*
 ============================================================================
 Name        : 152.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

typedef struct {
int r,g,b;
}Color;

typedef struct {
int x,y;
}Coords;

typedef struct {
Color color;
Coords point[5];
} Pentagon;

int main () {
FILE *file;
file = fopen("read.txt", "r");

if (file == NULL) {
printf("Problem opening files.");
return 1;
}

int number[100], i = 0;

do {
fscanf (file, "%i", &number[i]);
i++;
} while (!feof(file));

Color color0 = { number[0], number[1], number[2] };

Pentagon shape =
{
color0, //or { number[0], number[1], number[2] },
		{
		{ number[3], number[4] },
		{ number[5],number[6] },
		{ number[7],number[8] },
		{ number[9],number[10] },
		{ number[11],number[12] }
        }
};
printf("%i %i %i", color0.r, color0.g, color0.b);
fclose(file);
return 0;
}
