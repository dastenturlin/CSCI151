/*
 ============================================================================
 Name        : 241.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void writeln(char letters[]) {
	for (int i=0; letters[i]!='\0'; i++) {
		printf("%c", letters[i]);
	}
	putchar('\n');
}
int main() {
	char arr[] = "abcdef";
	char *ptr = "ghijklmnop";

	writeln(arr);
	writeln(ptr);
	writeln("qrstuv");
	return 0;
}
