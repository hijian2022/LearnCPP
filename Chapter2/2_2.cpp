/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-05 23:07:11
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 19:39:40
*/


//例2-2:输入一个年份，判断是否闰年
//is else 选择分支结构


//sizeof 运算符
#include <iostream>

using namespace std;

int main()
{

	int year;
	bool isLeapYear;

	cout << "Enter the year:";
	cin >> year;
	isLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	if(isLeapYear)
		cout << year << " is a leap year" << endl;
	else 
		cout << year << " is not a leap year" << endl;

	// int a(16);

	// int x1, x2;
	
	// int day;
	// const float PI = 3.1415926;
	// cout << "char : " << sizeof(char) << "bytes" << endl;
	// cout << "short : " << sizeof(short) << "bytes" << endl;
	// cout << "unsigned short : " << sizeof(unsigned short) << "bytes" << endl;
	// cout << "signed short: " << sizeof(signed short) << "bytes" << endl;
	// cout << "int : " << sizeof(int) << "bytes" << endl;
	// cout << "signed int : " << sizeof(signed int) << "bytes" << endl;
	// cout << "unsigned int : " << sizeof(unsigned int) << "bytes" << endl;
	// cout << "long : " << sizeof(long) << "bytes" << endl;
	// cout << "unsigned long : " << sizeof(unsigned short) << "bytes" << endl;
	// cout << "signed long : " << sizeof(signed long) << "bytes" << endl;
	// cout << "float : " << sizeof(float) << "bytes" << endl;
	// cout << "double : " << sizeof(double) << "bytes" << endl;

	// cout << "a:" << sizeof a << endl;

	

	
	
/*
	//判断输入周几
	cout << "输入一个数字，输出星期几:" << endl;
	cin >> day;
	switch(day){
		case 0: 
			cout << "Sunday" << endl;
			break;
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		default: //可选（以上均否时）
			cout << "输入数字不在0-6之间" << endl; 
	}
	*/

	return 0;
}