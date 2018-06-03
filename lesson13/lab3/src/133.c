/*
 ============================================================================
 Name        : 133.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int R=10, C=10;
	//scanf("%i %i", R, C);
	int a[R][C];
	//int b[R][C];

	int i, j;

	for (i = 0; i < R; i++) {
	 for (j = 0; j < C; j++) {
	 a[i][j]=rand()%1001;
	 printf("%i ", a[i][j]);
	 }
	 printf("\n");
	}
    int max=0, p,q;
	for (i = 0; i < R; i++)
	{
	   for (j = 0; j < C; j++)
	   {
	   if(a[i][j]>max)
	   {
	   max=a[i][j];
	   p=i;
	   q=j;
	   }
	   }
	 //printf("\n");
	}
	printf("\n%i, %i row, %i column", max, p+1, q+1);
	return 0;
}
