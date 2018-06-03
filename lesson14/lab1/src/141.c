/*
 ============================================================================
 Name        : 141.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


typedef struct {
	int nowHours;
	int nowMins;
	int advMins;
} account;

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

	account myAcct;

	scanf("%i %i %i", &myAcct.nowHours, &myAcct.nowMins, &myAcct.advMins);

	myAcct.nowHours  = (myAcct.nowHours * 60 + myAcct.nowMins + myAcct.advMins) /60;
	myAcct.nowMins  = (myAcct.nowHours * 60 + myAcct.nowMins + myAcct.advMins) %60;

	printf("%i %i", myAcct.nowHours, myAcct.nowMins);


	return 0;
}
