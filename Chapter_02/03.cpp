#include<iostream>

using namespace std;
void fir()
{
	cout << "Three blind mice\n";
}
void sec()
{
	cout << "See how they run\n";
}
int main()
{
	fir();
	fir();
	sec();
	sec();
	//根据ANSI/SIO C++标准，main()函数可省略return 0;
}
