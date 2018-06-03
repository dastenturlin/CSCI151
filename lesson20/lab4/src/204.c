/*
 ============================================================================
 Name        : 204.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void concat (char str1[], char str2[], char resultStr[])
{
	int i=0, j=0;
	while (str1[i]!='\0')
	{
	i++;
	}
	while (str2[j]!='\0')
	{
	j++;
	//i++;
	}
	for(int k=0; k<i; k++)
	{
	resultStr[k] = str1[k];
	}
	int l=0;
	for(int k=i; k<i+j; k++)
	{
	resultStr[k] = str2[l];
	l++;
	}
}

int main() {
	char a[1000] = "apple";
	char b[1000] = "banana";
	char c[1000];
	concat (a,b,c);
	printf("%s", c);
	return 0;
}
