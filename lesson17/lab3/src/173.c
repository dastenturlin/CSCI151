/*
 ============================================================================
 Name        : 173.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse (int size, double arr[size])
{
	for(int i=size-1; i>=0; i--)
	{
		printf("%.1f ", arr[i]);
	}
};

int main() {

	double a[3] = {1,4,7};
	reverse (3, a);
	return 0;
}
