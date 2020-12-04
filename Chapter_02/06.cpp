#include<iostream>

using namespace std;

void LytoAu(double Ly)
{
	cout << Ly << " light years = "
		 << 63240*Ly << " astronomical units.";
}

int main()
{
	cout << "Enter the number of light years: ";
	double Ly;
	cin >> Ly;
	LytoAu(Ly);
	//根据ANSI/SIO C++标准，main()函数可省略return 0;
}
