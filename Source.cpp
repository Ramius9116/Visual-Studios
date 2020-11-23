#include<iostream>
#include<cmath>
#include<iomanip>

using std::cin;
using std::cout;
using std::endl;

double celcius(double temp)
{
	double cel = 5.0 / 9.0 * (temp - 32);

	return cel;
}

double fahrenheit(double temp)
{
	double far = 9.0 / 5.0 * temp + 32;

	return far;
}

int main()
{
	double temp = 0;
	cout << "Enter a tempurature: ";
	cin >> temp;

	char type;
	cout << "Enter \"c\" if you want to convert to celcius and \"f\" to convert to fahrenheit: ";
	cin >> type;

	while (type != 'c' && type != 'C' && type != 'f' && type != 'F')
	{
		cout << "Your entry is not recognized\n" << "Enter \"c\" if you want to convert to celcius and \"f\" to convert to fahrenheit: ";
		cin >> type;
	}

	double ctemp;
	if (type == 'c' || type == 'C')
	{
		ctemp = celcius(temp);
		cout << temp << " degrees fahrenheit is " << ctemp << " degrees celcius";
	}
	if (type == 'f' || type == 'F')
	{
		ctemp = fahrenheit(temp);
		cout << temp << " degrees celcius is " << ctemp << " degrees fahrenheit";
	}

	return 0;
}