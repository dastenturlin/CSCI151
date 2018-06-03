/*
 ============================================================================
 Name        : gradecalc.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double labs=90;
	double quizzes=90;
	double final=90;

	double perfomance = labs * 0.3 + quizzes * 0.5 + final * 0.2;
	printf("your perfomance is %f", perfomance);
	return 0;
}
