#include<iostream>

using namespace std;

void CvtoF(double Cv)
{
	cout << Cv << " degrees Celsisus is "
		 << 1.8 * Cv + 32 << " degree Fahrenheit.";
}

int main()
{
	cout << "Please enter a Celsius value: ";
	double Cv;
	cin >> Cv;
	CvtoF(Cv);
	//根据ANSI/SIO C++标准，main()函数可省略return 0;
}
