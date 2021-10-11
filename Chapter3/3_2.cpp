/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 07:51:00
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 08:32:01
*/


//例3-2 数制转换
//输入一个8位二进制数将其转换为十进制输出

#include <iostream>
#include <string> 

using namespace std;

double power(double x, int n);

int main()
{
	string s;
	int value = 0;
	cout << "Please enter 8 bit binary number: ";
	cin >> s;
	int length = s.length();
	for (int i = 0; i < length; i++)
	{
		// char ch;
		// cin >> ch;
		if( s.at(i) == '1') //string字符串第一个字符为首字符
			value += static_cast <int> (power(2, length -1 - i));
	}
	cout << "Decimal value is " << value << endl;
	return 0;
}

double power(double x, int n)
{
	double val = 1.0;
	while(n--)
		val *= x;
	return val;
}