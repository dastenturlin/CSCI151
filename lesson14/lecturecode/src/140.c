/*
 ============================================================================
 Name        : 140.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


typedef struct {
	int customerID;
	_Bool isSavings;
	int balance;
	double interestRate;
} account;

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

	account myAcct;

	/* TODO: Write some code that will first read in from
	 * the user the ID, account type, and initial balance
	 *
	 * The interest rate for savings accounts is 2%, and
	 * the interest rate for others is 1%
	 *
	 * Then, ask the user how long they want to wait, and
	 * then output the resulting balance after interest
	 * is accrued
	 */

	printf("Enter in the customer id: ");
	scanf("%i", &myAcct.customerID);

	char ch;
	printf("Is this a savings account (Y/N)? ");
	scanf(" %c", &ch);

	if (ch == 'Y' || ch == 'y') {
		myAcct.isSavings = 1;
		myAcct.interestRate = 0.02;
	} else {
		myAcct.isSavings = 0;
		myAcct.interestRate = 0.01;
	}

	printf("What is the initial balance? ");
	scanf("%i", &myAcct.balance);

	int years;
	printf("How many years will you wait? ");
	scanf("%i", &years);

	int i;
	for (i = 0; i < years; i++) {
		myAcct.balance = myAcct.balance
							* (1.0 + myAcct.interestRate);
	}

	printf("Your final balance is: %i", myAcct.balance);
	return 0;
}
