/*
 ============================================================================
 Name        : 142.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int id;
	char gender;
	int c1,c2,c3,c4,c5;
	double finalGrade;
} student;

int main(void) {

	student noname;


	scanf("%i", &noname.id);
	scanf(" %c", &noname.gender);
	scanf("%i", &noname.c1);
	scanf("%i", &noname.c2);
	scanf("%i", &noname.c3);
	scanf("%i", &noname.c4);
	scanf("%i", &noname.c5);

	if(noname.id<100000||noname.id>999999)
	{
		return 1;
	}
	noname.finalGrade = (double)noname.c1*0 + (double)noname.c2*0.1 +
			(double)noname.c3*0.2 + (double)noname.c4*0.3 + (double)noname.c5*0.4;

	printf("%i %c %i %i %i %i %i %f", noname.id, noname.gender,
			noname.c1, noname.c2, noname.c3, noname.c4, noname.c5, noname.finalGrade);
	return 0;
}
