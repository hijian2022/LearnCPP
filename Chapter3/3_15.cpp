/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 17:04:11
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 17:13:05
*/

//3-17 默认参数的使用
//计算长方体的体积
//函数getVolume计算体积
//三个形参；length width 默认2 height 默认3
//主函数用不同形式调用getVolume函数

#include <iostream>
using namespace std;

int main()
{
	const int X = 10, Y = 12, Z = 15;
	double getVolume(double length, double width = 2.0, double height = 3.0);
	cout << getVolume(X, Y, Z) << endl;
	cout << getVolume(X, Y) << endl;
	cout << getVolume(X) << endl;
	return 0;
}
double getVolume(double length, double width, double height)
{
	return length * width * height;
}

