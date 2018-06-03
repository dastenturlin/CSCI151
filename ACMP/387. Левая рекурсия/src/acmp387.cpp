//============================================================================
// Name        : acmp387.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	string a[n];

	for (int j=0; j<n; j++)
	{
		cin>>a[j];
	}

	int counter=0;

	for (int i=0; i<n; i++)
	{
		string check = a[i];
		if(check[0]==check[3])counter++;
	}

	cout<<counter;

	return 0;
}

