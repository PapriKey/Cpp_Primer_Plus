#include<iostream>

using namespace std;

const double arctode = 60.0;
const double sarctode = 3600.0;

int main()
{
	double de, arc, sarc;
	cout << "Enter a latitude in degrees, minutes, and seconds:\n" << "First, enter the degrees: ";
	cin >> de;
	cout << "Next, enter the minutes of arc: ";
	cin >> arc;
	cout << "Finally, enter the seconds of arc: ";
	cin >> sarc;
	cout << de << " degrees " << arc << " minutes " << sarc << " seconds = " << de + arc / arctode + sarc / sarctode<<"degrees";
	//根据ANSI/SIO C++标准，main()函数可省略return 0;
}
