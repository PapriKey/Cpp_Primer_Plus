#include<iostream>

using namespace std;

int main()
{
	cout << "Please rnter the average fuel consumption (liters per 100kilometers): ";
	double a;
	cin >>a;
	a = 62.14 / (a / 3.875);
	cout << "The average fuel consumption for this car is " << a << " gallons per mile.";
	//根据ANSI/SIO C++标准，main()函数可省略return 0;
}
