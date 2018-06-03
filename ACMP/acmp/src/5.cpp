//============================================================================
// Name        : 5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int n;
	cin>>n;

	int a[n];
	int b[n];
	int c[n];
	int x=0;
	int y=0;

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}


	for(int i=0; i<n; i++)
	{
		if(a[i] % 2 == 1)
		{
			b[x]=a[i];
			x++;
		}
		else
		{
			c[y]=a[i];
			y++;
		}

	}

	for(int i=0; i<x; i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;

	for(int i=0; i<y; i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;

	if(y>=x)cout<<"YES";
	else cout<<"NO";

	return 0;
}



