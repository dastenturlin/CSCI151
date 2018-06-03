/*
 ============================================================================
 Name        : 153.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

typedef struct {
int customerID;
char account;
int balance;
} Bankcustomer;

int main() {
FILE *file;
file = fopen("read.txt", "r");

if (file == NULL) {
printf("Problem opening files.");
return 1;
}

Bankcustomer acc[10];
int i=0;

do { //scanning the values af an array

fscanf (file, "%i", &acc[i].customerID);
fscanf (file, "%c", &acc[i].account);
fscanf (file, "%i", &acc[i].balance);

i++;
} while (!feof(file));

int checking = 0, saving = 0, deposit = 0;
double c = 0, s = 0, d = 0; // s-saving, c-checking, d-deposit
double cmean, smean, dmean;

for (i = 0; i < 10; i++) {
if (acc[i].account== 'c') {
checking += acc[i].balance;
c++;

cmean=checking/c;
}
if(acc[i].account == 's') {
saving += acc[i].balance;
s++;

smean=saving/s;
}
if(acc[i].account =='d') {
deposit += acc[i].balance;
d++;

dmean=deposit/d;
}

}

printf ("checking: %.2f\n ", cmean);
printf ("saving: %.2f\n", smean);
printf ("deposit: %.2f\n", dmean);
return 0;
}

