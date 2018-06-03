/*
 ============================================================================
 Name        : 202.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

_Bool areEqual (char str1[], char str2[])
{
	int i=0;
	while(str1[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			return 0;
		}
		if(str2[i]=='\0')
		{
			return 0;
		}
		i++;
	}
	if(str2[i]=='\0')
		return 1;
	else return 0;
}

int main() {

	char a[1000]="apple";
	char b[1000]="apple";

	_Bool c = areEqual(a,b);
	printf("%i", c);

	return 0;
}
