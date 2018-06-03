/*
 ============================================================================
 Name        : 172.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

double maxVal(int len, double arr[len][len])
{
	double max=arr[0][0];
	for(int i=0; i<len; i++)
	{
		for(int j=0; j<len; j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
			}
		}
	}
	printf("%.2f", max);
}

int main() {
	int size=3;
    double a[3][3] = {{1,5,9},{2,4,10},{3,6,3}};

    maxVal(size, a);
    return 0;
}
