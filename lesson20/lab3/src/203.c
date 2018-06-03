/*
 ============================================================================
 Name        : 203.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse (char fromStr[], char toStr[])
{
	int i=0;
	while (fromStr[i]!='\0')
	{
		i++;
	}
	//int size=i;
	for (int k=0; k<i; k++)
	{
	toStr[k] = fromStr[i-k-1];
	}
}

int main() {
    char a[1000] = "apple";
    char b[1000];
    reverse (a,b);
    printf("%s", b);

	return 0;
}
