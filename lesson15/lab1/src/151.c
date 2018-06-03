/*
 ============================================================================
 Name        : 151.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//defining our structures

typedef struct
{
	int r,g,b;
}Color;

typedef struct
{
	int x,y;
}Coords;

typedef struct
{
	Coords upperleft;
	int length;
	Color outline;
	Color fill;
	Coords vertices[3];
}Square;

int main(void) {


	// A STRUCTURE CONTAINING ARRAYS
	Square fourangles;

	//BRUTAL INITIALIZATION

	fourangles.vertices[0].x= 0;
	fourangles.vertices[0].y= fourangles.upperleft.y;

	fourangles.vertices[1].x= 0;
	fourangles.vertices[1].y= 0;

	fourangles.vertices[2].x= fourangles.upperleft.x;
	fourangles.vertices[2].y= 0;



	// A STRUCTURE CONTAINING ARRAYS 2.0

	Square fanglz =
	{
			{5,3},   //upperleft
			5,       //length
			{1,1,1}, //outline color, represented by integers r,g,b
			{2,2,2}, //fill color, same three integers
			{        //array of Coords variables, represented by two integers x,y
					{10,10},    //vertices[0]
					{20,20},    //vertices[1]
					{30,30}     //vertices[2]
			}
	};


	//AN ARRAY CONTAINING STRUCTURES
	Square squares[5] =
	{

			// now we we write our variables:
			// UPPERLEFT, LENGHT, OUTLINE, FILL, VERTICES
	};



	return 0;

}
