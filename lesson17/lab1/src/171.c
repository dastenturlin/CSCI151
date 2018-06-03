/*
 ============================================================================
 Name        : 171.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int arr(int size, double a[])
{
	int min=a[0];
	int num;
	for(int i=0; i<size; i++)
	{
		if(a[i]<min)
			{
			num=i+1;
			min=a[i];
			}
	}
	printf("%i", num);

}


int main() {
	double z[5]={10,2,3,4,5};
	arr(5, z);
	return 0;
}
