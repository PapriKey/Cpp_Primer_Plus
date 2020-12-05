//本体个人理解为将秒数转换为以甜，分钟，秒形式输出，如此题目的案例错误。

#include<iostream>

using namespace std;

int main()
{
	cout << "Enter the number of seconds: ";
	int sec;
	cin >> sec;
	int day, hour, min,sec2;
	day = sec / (60 * 60 * 60);
	hour = (sec - (day * 60 * 60 * 60)) / (60 * 60);
	min = (sec - day * 60 * 60 * 60 - hour * 60 * 60) / 60;
	sec2 = (sec - day * 60 * 60 * 60 - hour * 60 * 60 - min * 60);
	cout << sec << " seconds = " << day << " days, " << hour << " hours, " << min << " minutes, " << sec2 << " secounds ";
	//根据ANSI/SIO C++标准，main()函数可省略return 0;
}
