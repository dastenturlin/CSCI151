/*
 ============================================================================
 Name        : 174.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void transpose(int row, int col, double orig[row][col],
		double result[col][row])
{
	double trans[row*col];

	int size=0;
	for(int i=0; i<row; i++)
		{
		for(int j=0; j<col; j++)
		{
			trans[size]=orig[i][j];
			size++;
		}
	}
	int size2=0;
	for(int i=0; i<col; i++)
	{
		for(int j=0; j<row; j++)
		{
			result[i][j]=trans[size2];
			size2++;
			printf("%.1f ", result[i][j]);
		}
		printf("\n");
	}
}

int main() {

	double a[3][4] = { {1,5,6,4},{3,4,5,3},{7,6,0,4} };
	double b[4][3];
	transpose(3,4, a, b);
    return 0;
}
