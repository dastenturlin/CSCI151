/*
 ============================================================================
 Name        : 163.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <math.h>
#include <stdio.h>

_Bool isPrime(int n)
{
for(int i=2; i<n; i++)
{
if (n % i == 0){
return 0;
}
return 1;
}
}

int main()
{
int n;

setvbuf (stdout, NULL, _IONBF, 0);
scanf ("%i", &n);


int y = isPrime(n);

if (y==1){
printf ("prime\n");
}
if (y==0){
printf ("not prime\n");
}


return 0;
}

