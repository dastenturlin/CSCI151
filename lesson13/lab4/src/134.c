/*
 ============================================================================
 Name        : 134.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int R=3, C=3;
		int a[R][C];
        int b[R][C];
        int c[R][C];
		int i, j;

		for (i = 0; i < R; i++) {
		 for (j = 0; j < C; j++) {
		 a[i][j]=rand()%11;
		 b[i][j]=rand()%11;
		 }
		}

		//printing initial values
		for (i = 0; i < R; i++) {
		 for (j = 0; j < C; j++) {
		 printf("%2i ", a[i][j]);
		 }
		 printf("  ");
		for (j = 0; j < C; j++) {
		 printf("%2i ", b[i][j]);
		 }
		 printf("\n");
		}
		 printf("\n");

		//int k;
		for (i = 0; i < R; i++) {
		 for (j = 0; j < C; j++) {
			  c[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j];
			  printf("%3 i", c[i][j]);
		 }
		 printf("\n");
		}

		return 0;
		}

