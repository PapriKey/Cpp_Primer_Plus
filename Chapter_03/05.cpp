#include<iostream>

using namespace std;

int main()
{
	cout << "Enter the world's population: ";
	double wpu;
	cin >> wpu;
	cout << "Enter the population of the US: ";
	double uspu;
	cin >> uspu;
	cout << "The population of the US is " << (uspu / wpu)*100 << "% of the world population.";
	//根据ANSI/SIO C++标准，main()函数可省略return 0;
}
