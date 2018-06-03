/*
 ============================================================================
 Name        : 182.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int addSubarray (int x[], int from, int to)
{
	if (from == to)
	{
		return x[to];
	}
	else
	{
		return x[from]+addSubarray(x, from+1, to);
	}
}

int main()

{
	int arr[8] ={10,10,10,10,10,10,10,10};
	printf ("%i\n", addSubarray (arr, 2, 5));
	printf ("%i\n", addSubarray (arr, 6, 7));
	printf ("%i\n", addSubarray (arr, 3, 4));

return 0;
}
