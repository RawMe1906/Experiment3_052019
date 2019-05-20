#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main()
{
	int a, b, x, y, backchar;
	char arr[x]={};
	
	cout << "This program lets you enter an array of characters, then shows the reverse";
	cout << "\nor the ascending order of the array.";
	cout <<  "\n" << endl;
	cout << "Enter the number of characters you want to input: ";
	cin >> x;
	cout << "Enter " << x << " characters: ";
	for (a=0;a<x;a++)
	{
		cin >> arr[a];
	}

	for (a=0; a<x;++a)
	{
		for (b=0;b<x-a;b++)
		{
			if (arr[b]>arr[b+1])
			
			{
			backchar = arr[b];
			arr[b] = arr[b+1];
			arr[b+1] = backchar;
			}
		}
	}
	
	
	cout <<  "\n" << endl;
	cout <<  "\n" << endl;
	cout << "Reverse order: ";
	for (a=0;a<=x;++a)
	{
		cout << arr[a];
	}
	cout <<  "\n" << endl;
	cout << "Size of array= " << x;
	_getch();
	return 0;
}
