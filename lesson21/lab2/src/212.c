/*
 ============================================================================
 Name        : 212.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double strToDouble (char str[]) {
	double intValue, result = 0.0;


	if(str[0]=='-')
	{

	}

	else if(str[0] >= '1' && str[0] <= '9')
	{
		intValue =  str[0] - '0';
		result = result * 10 + intValue;
		//return result;
	}
	else return 0.0;


	for (int i=1; i < strlen (str); i++)  // scanning all the variables
				{
				double dec=0.0;
				intValue=0.0;
				if (str[i] >= '0' && str[i] <= '9') //MOST OBVIOUS CASE - DIGIT
					{
						intValue = str[i] - '0';
						result = result * 10 + intValue;
						continue;
					}

				 else if(str[i] == '.')   // CASE OF A DECIMAL POINT => ONLY NUMBERS ARE ALLOWED
					{
					 int d=1;
						for (int j=i+1; j <= strlen(str)-1; j++)
						{
							if(str[j] >= '0' && str[j] <= '9')
							{
								intValue = str[j] - '0';


								result=intValue/pow(10,d)+result;
								d++;
							}

						else if(str[j] == 'e') //CASE OF AN EXPONENT => ONLY NUMBERS AND A MINUS SIGN FOR A FIRST POSITION ARE ALLOWED
								{


								dec=0;
								int c=1;

								if(str[j+1] == '-')
									{
										int a;
										int eres=0;
										for (int k=j+2; k < strlen (str); k++)
										{
											if(str[k] >= '0' && str[k] <= '9')
											{} else return 0.0;

											a = str[k] - '0';
											eres = eres * 10 + a;
										}

									if(str[0]=='-') result *=-1;
									result = result / pow (10, eres);
									return result;
									}


									else if(str[j+1] >= '0' && str[j+1] <= '9')
									{
										int a;
										int eres=0;
										for (int k=j+1; k < strlen (str); k++)
										{
											if(str[k] >= '0' && str[k] <= '9')
											{} else return 0.0;

											a = str[k] - '0';
											eres = eres * 10 + a;
										}

										if(str[0]=='-') result *=-1;
										result = result * pow (10, eres);
										return result;
									}
								}

						}
						if(str[0]=='-') 	return -(result+dec/10);
						else return (result+dec/10);
					}




				else if(str[i] == 'e') //CASE OF AN EXPONENT => ONLY NUMBERS AND A MINUS SIGN FOR A FIRST POSITION ARE ALLOWED
					{



						if(str[i+1] == '-')
						{
							int a;
							int b=0;
							for (int j=i+2; j < strlen (str); j++)
							{
								if(str[j] >= '1' && str[j] <= '9')
								{} else return 0.0;

								a = str[j] - '0';
								b = b * 10 + a;
							}


							return -result/pow(10,b);
						}
						else if(str[i+1] >= '0' && str[i+1] <= '9')
						{
							int a;
							int b=0;
							for (int j=i+1; j < strlen (str); j++)
							{
								if(str[j] >= '1' && str[j] <= '9')
								{} else return 0.0;

								a = str[j] - '0';
								b = b * 10 + a;
							}
							result = result*pow(10,b);
							return result;
						}
						//else return 0.0;
					}
				}
			return result;
			}


int main() {
	printf("%.1f\n", strToDouble("34"));
	printf("%.1f\n", strToDouble("-487.45234"));
	printf("%.1f\n", strToDouble("-123.456e-6"));
	printf("%.1f\n", strToDouble("24.6e5"));
	printf("%.1f\n", strToDouble("-123e-1"));
	return 0;
}
