#include<iostream>

using namespace std;

int main()
{
	cout << "Enter the mileages: ";
	double mileage;
	cin >> mileage;
	cout << "Enter the gallons: ";
	double gallon;
	cin >> gallon;
	cout << "The average fuel consumption for this car is " << mileage / gallon << " mileages per gallons.";
	//根据ANSI/SIO C++标准，main()函数可省略return 0;
}
