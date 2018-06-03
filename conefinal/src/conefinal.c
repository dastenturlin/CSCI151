/*
 ============================================================================
 Name        : conefinal.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	double baseHeight=3.0;
	double baseRadius=4.0;
	double tempo;
	tempo = sqrt(baseRadius*baseRadius+baseHeight*baseHeight);
	double surfaceArea;
	surfaceArea = 3.14*baseRadius*tempo;
	printf("%f\n", surfaceArea);

	double baseArea;
	baseArea = 3.14 * baseRadius * baseRadius;
	printf("%f\n", baseArea);

	double volume;
	volume = 3.14*baseRadius*baseRadius*baseHeight/3;
	printf("%f", volume);
	//printf("%f\n","%f\n","%f", surfaceArea, baseArea, volume);

	return 0;
}
