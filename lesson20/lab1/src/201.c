/*
 ============================================================================
 Name        : 201.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void stringCopy (char fromStr[], char toStr[])
{
	int i=0;
	while (fromStr[i]!='\0')
	{
		toStr[i]=fromStr[i];
		i++;
	}
}

int main() {

	char a[1000] = "apple";
	char b[1000];
	stringCopy(a,b);
	printf("%s", b);
	return 0;
}
