/*
 ============================================================================
 Name        : 183.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

double minValue(double arr[], int from, int to)
{
	if(from==to)
	{
		return arr[to];
	}
	else if(arr[from] < minValue(arr, from+1, to))
	{
		return arr[from];
	}
	else
	{
		return minValue(arr, from+1, to);
	}
}


int main() {

	double a[4]={1,4,6,3};
	printf("%.2f", minValue(a, 1, 2));
	return 0;
}
