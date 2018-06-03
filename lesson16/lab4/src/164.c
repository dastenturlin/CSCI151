/*
 ============================================================================
 Name        : 164.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void sumofDigits(int n)
{
	int i=0, sum=0, curr, remainder;
	curr=n;
	while(pow(10,i)<curr)
	{
		//power=pow(10,i);
		//curr=n/power;
		//curr=curr%10;
		//sum=sum+curr;
		if(i==0)
			{
			remainder=n%10;
			}
		else
		{
        n=n/10;
		remainder=n%10;
		}
		sum=sum+remainder;
		i++;
		printf("%i ", remainder);
	}
	printf("\n%i ", sum);
}


int main(void) {
	int n;
	scanf("%i", &n);
	sumofDigits(n);
	return 0;
}
