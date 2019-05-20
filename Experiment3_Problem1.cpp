#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n=10, x, y, z, arr[n], backnum;
	double sum=0;
	
	cout << "This program lets you input 10 integers, then outputs the least number,\ngreatest number, the average and the sum of all numbers." << endl;
	cout << "\n";
	
	for (x=0; x<10;++x)
	{
		cout << "Enter number " << x + 1 << ": ";
		cin >> arr[x];
			
	}
	
	 cout << "\n";
	 
	for (x=0;x<n;x++)
	{
		for (y=0;y<n-x-1;y++)
		{
			if (arr[y]>arr[y+1])
			{
				backnum = arr[y];
				arr[y] = arr[y+1];
				arr[y+1] = backnum;
				
			}
		}
	}
	
	for (x=0;x<n;++x)
	{
		sum += arr[x];
	}
	
	cout << "Smallest integer = " << arr[0] << endl;
	cout << "Largest integer = " << arr[9] << endl;
	cout << "Sum of all integers = " << sum << endl;
	cout << "Average of all integers = " << sum/n;
	
	_getch();
	return 0;
}
