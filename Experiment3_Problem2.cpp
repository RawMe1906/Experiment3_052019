#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int province = 3, days = 7, temperature[province][days], a, b;
	
	cout << "Please enter the 7-day temperature of Provinces 1, 2 and 3." << endl;
	cout << "\n";
	
	for (a=0; a<province; ++a)
	{
		for (b=0; b<days; ++b)
		{
			cout << "Province " << a + 1 << ", " << "Day " << b + 1 << ": ";
			cin >> temperature[a][b];
		}
	}
	
	cout << "\n";
	cout << "\nTemperature in a week of 3 Provinces:" << endl;
	for (a=0; a<province; ++a)
	{
		for (b=0; b<days; ++b)
		{
			cout << "Province " << a + 1 << ", " << "Day " << b + 1 << "= ";
			cout << temperature[a][b] << endl;
		}
	}
	
	_getch();
	return 0;
}
