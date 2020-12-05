#include<iostream>

using namespace std;

const double intome = 0.0254;
const double intoft = 12;
const double lbtokg = 2.2;

int main()
{
	double ft, in, lb, BIM;
	cout << "Please enter your height(first enter in then enter ft): ";
	cin >> in;
	cin >> ft;
	cout << "Please enter your weight: ";
	cin >> lb;
	BIM = ((in+ft/intoft) * intome) / (lb * lbtokg);
	cout << "Your Body Mass Index is " << BIM << " .";
  
	//根据ANSI/SIO C++标准，main()函数可省略return 0;
}
