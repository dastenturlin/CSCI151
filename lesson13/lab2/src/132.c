/*
 ============================================================================
 Name        : 132.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int R = 12, C = 12;
	int a[R][C];
	int b[R][C];

	int i, j, val=100;

	for (i = 0; i < R; i++) {
	 for (j = 0; j < C; j++) {
	 a[i][j] = val;
	 val++;
	 }
	}

	for (i = 0; i < R; i++) {
	 for (j = 0; j < C; j++) {
	 printf("%5d", a[i][j]+25);
	 }
	 printf("\n");
	}
	return 0;
}


