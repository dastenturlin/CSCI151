/*
 ============================================================================
 Name        : 122.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[20];

	for(int i=0; i<=19; i++)
	{
		arr[i]=rand() % 51 + 50;
		printf("%i ", arr[i]);
	}
    printf("\n");

	double mean=0;
	int max=arr[0];
	int min=arr[0];

	for(int i=0; i<=19; i++)
	{
		mean=mean+arr[i];
		//printf("%.1f ", mean);
		if(arr[i]>max)max=arr[i];
		if(arr[i]<min)min=arr[i];
	}
	mean/=20;
	printf("%i %i %.2f", min, max, mean);
	return 0;
}
