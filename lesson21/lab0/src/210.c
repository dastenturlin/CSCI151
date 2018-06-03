/*
 ============================================================================
 Name        : 210.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int strToInt(const char num[]) {
	int intValue, result = 0;

	for (int i = 0; num[i] >= '0' && num[i] <= '9'; i++) {
		intValue = num[i] - '0';
		result = result * 10 + intValue;
	}
	return result;
}

int main() {
	printf("%i\n", strToInt("34"));
	printf("%i\n", strToInt("487.4abc"));
	return 0;
}


