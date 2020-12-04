#include<iostream>

using namespace std;

void Time(int h,int m)
{
	cout << "Time: " << h << ":" << m;
}

int main()
{
	int h, m;
	cout << "Enter the number of hours: ";
	cin >> h;
	cout << "Enter the number of minuntes: ";
	cin >> m;
	Time(h, m);
	//根据ANSI/SIO C++标准，main()函数可省略return 0;
}
