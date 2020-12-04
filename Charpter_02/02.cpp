#include<iostream>

using namespace std;

int main()
{
	cout << "Please enter: ";
	int num;
	cin >> num;
	cout << "The distance is: "
		 << num * 220;
	//根据ANSI/SIO C++标准，main()函数可省略return 0;
}
