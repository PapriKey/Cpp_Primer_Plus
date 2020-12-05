#include<iostream>

using namespace std;

const double tra = 12;

int main()
{
	double a;
	cout << "Please enter your height:____"
		<< "\b\b\b\b";
	cin >> a;
	cout << "Your height is: " << a / tra << " inch";
	//根据ANSI/SIO C++标准，main()函数可省略return 0;
}
