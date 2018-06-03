/*
 ============================================================================
 Name        : 093.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*
	setvbuf(stdout, NULL, _IONBF, 0);
	int d;
	scanf("%i", &d);
    int e;
	if(d<=31){
		if(d%7==1)
		        {
			        printf("It is Friday, January %i", d);
		        }
		if(d%7==2)
				{
					printf("It is Saturday, January %i", d);
				}
		if(d%7==3)
				{
					printf("It is Sunday, January %i", d);
				}
		if(d%7==4)
				{
					printf("It is Monday, January %i", d);
				}
		if(d%7==5)
				{
					printf("It is Tuesday, January %i", d);
				}
		if(d%7==6)
				{
					printf("It is Wednesday, January %i", d);
				}
		if(d%7==0)
				{
					printf("It is Thursday, January %i", d);
				}
	}
	else if(d<=60){
    e=d%31;
if(d%7==1)
    {
        printf("It is Friday, February %i", e);
    }
if(d%7==2)
	{
		printf("It is Saturday, February %i", e);
	}
if(d%7==3)
	{
		printf("It is Sunday, February %i", e);
	}
if(d%7==4)
	{
		printf("It is Monday, February %i", e);
	}
if(d%7==5)
	{
		printf("It is Tuesday, February %i", e);
	}
if(d%7==6)
	{
		printf("It is Wednesday, February %i", e);
	}
if(d%7==7)
	{
		printf("It is Thursday, February %i", e);
	}

	}
	else if(d<=60){
	    e=d%31;
	if(d%7==1)
	    {
	        printf("It is Friday, February %i", e);
	    }
	if(d%7==2)
		{
			printf("It is Saturday, February %i", e);
		}
	if(d%7==3)
		{
			printf("It is Sunday, February %i", e);
		}
	if(d%7==4)
		{
			printf("It is Monday, February %i", e);
		}
	if(d%7==5)
		{
			printf("It is Tuesday, February %i", e);
		}
	if(d%7==6)
		{
			printf("It is Wednesday, February %i", e);
		}
	if(d%7==7)
		{
			printf("It is Thursday, February %i", e);
		}

		}
     */
	int d;
	scanf("%i", &d);


	if(d%7==1)
	{
	if(d<=31) printf("It is Friday, January %i", d);
	else if(d<=60) printf("It is Friday, February %i", d%31);
	else if(d<=91) printf("It is Friday, March %i", d%60);
	else if(d<=121) printf("It is Friday, April %i", d%91);
	else if(d<=152) printf("It is Friday, May %i", d%121);
	else if(d<=182) printf("It is Friday, June %i", d%152);
	else if(d<=213) printf("It is Friday, July %i", d%182);
	else if(d<=244) printf("It is Friday, August %i", d%213);
	else if(d<=274) printf("It is Friday, September %i", d%244);
	else if(d<=305) printf("It is Friday, October %i", d%274);
	else if(d<=335) printf("It is Friday, November %i", d%305);
	else if(d<=366) printf("It is Friday, December %i", d%335);
	}
	else if(d%7==2)
	{
	if(d<=31) printf("It is Saturday, January %i", d);
	else if(d<=60) printf("It is Saturday, February %i", d%31);
	else if(d<=91) printf("It is Saturday, March %i", (d%60));
	else if(d<=121) printf("It is Saturday, April %i", d%91);
	else if(d<=152) printf("It is Saturday, May %i", d%121);
	else if(d<=182) printf("It is Saturday, June %i", d%152);
	else if(d<=213) printf("It is Saturday, July %i", d%182);
	else if(d<=244) printf("It is Saturday, August %i", d%213);
	else if(d<=274) printf("It is Saturday, September %i", d%244);
	else if(d<=305) printf("It is Saturday, October %i", d%274);
	else if(d<=335) printf("It is Saturday, November %i", d%305);
	else if(d<=366) printf("It is Saturday, December %i", d%335);
	}
	else if(d%7==3)
	{
	if(d<=31) printf("It is Sunday, January %i", d);
	else if(d<=60) printf("It is Sunday, February %i", d%31);
	else if(d<=91) printf("It is Sunday, March %i", d%60);
	else if(d<=121) printf("It is Sunday, April %i", d%91);
	else if(d<=152) printf("It is Sunday, May %i", d%121);
	else if(d<=182) printf("It is Sunday, June %i", d%152);
	else if(d<=213) printf("It is Sunday, July %i", d%182);
	else if(d<=244) printf("It is Sunday, August %i", d%213);
	else if(d<=274) printf("It is Sunday, September %i", d%244);
	else if(d<=305) printf("It is Sunday, October %i", d%274);
	else if(d<=335) printf("It is Sunday, November %i", d%305);
	else if(d<=366) printf("It is Sunday, December %i", d%335);
	}
	else if(d%7==4)
	{
	if(d<=31) printf("It is Monday, January %i", d);
	else if(d<=60) printf("It is Monday, February %i", d%31);
	else if(d<=91) printf("It is Monday, March %i", d%60);
	else if(d<=121) printf("It is Monday, April %i", d%91);
	else if(d<=152) printf("It is Monday, May %i", d%121);
	else if(d<=182) printf("It is Monday, June %i", d%152);
	else if(d<=213) printf("It is Monday, July %i", d%182);
	else if(d<=244) printf("It is Monday, August %i", d%213);
	else if(d<=274) printf("It is Monday, September %i", d%244);
	else if(d<=305) printf("It is Monday, October %i", d%274);
	else if(d<=335) printf("It is Monday, November %i", d%305);
	else if(d<=366) printf("It is Monday, December %i", d%335);
	}
	else if(d%7==5)
	{
	if(d<=31) printf("It is Tuesday, January %i", d);
	else if(d<=60) printf("It is Tuesday, February %i", d%31);
	else if(d<=91) printf("It is Tuesday, March %i", d%60);
	else if(d<=121) printf("It is Tuesday, April %i", d%91);
	else if(d<=152) printf("It is Tuesday, May %i", d%121);
	else if(d<=182) printf("It is Tuesday, June %i", d%152);
	else if(d<=213) printf("It is Tuesday, July %i", d%182);
	else if(d<=244) printf("It is Tuesday, August %i", d%213);
	else if(d<=274) printf("It is Tuesday, September %i", d%244);
	else if(d<=305) printf("It is Tuesday, October %i", d%274);
	else if(d<=335) printf("It is Tuesday, November %i", d%305);
	else if(d<=366) printf("It is Tuesday, December %i", d%335);
	}
	else if(d%7==6)
	{
	if(d<=31) printf("It is Wednesday, January %i", d);
	else if(d<=60) printf("It is Wednesday, February %i", d%31);
	else if(d<=91) printf("It is Wednesday, March %i", d%60);
	else if(d<=121) printf("It is Wednesday, April %i", d%91);
	else if(d<=152) printf("It is Wednesday, May %i", d%121);
	else if(d<=182) printf("It is Wednesday, June %i", d%152);
	else if(d<=213) printf("It is Wednesday, July %i", d%182);
	else if(d<=244) printf("It is Wednesday, August %i", d%213);
	else if(d<=274) printf("It is Wednesday, September %i", d%244);
	else if(d<=305) printf("It is Wednesday, October %i", d%274);
	else if(d<=335) printf("It is Wednesday, November %i", d%305);
	else if(d<=366) printf("It is Wednesday, December %i", d%335);
	}
	else
	{
	if(d<=31) printf("It is Thursday, January %i", d);
	else if(d<=60) printf("It is Thursday, February %i", d%31);
	else if(d<=91) printf("It is Thursday, March %i", d%60);
	else if(d<=121) printf("It is Thursday, April %i", d%91);
	else if(d<=152) printf("It is Thursday, May %i", d%121);
	else if(d<=182) printf("It is Thursday, June %i", d%152);
	else if(d<=213) printf("It is Thursday, July %i", d%182);
	else if(d<=244) printf("It is Thursday, August %i", d%213);
	else if(d<=274) printf("It is Thursday, September %i", d%244);
	else if(d<=305) printf("It is Thursday, October %i", d%274);
	else if(d<=335) printf("It is Thursday, November %i", d%305);
	else if(d<=366) printf("It is Thursday, December %i", d%335);
	}


	return 0;
}
