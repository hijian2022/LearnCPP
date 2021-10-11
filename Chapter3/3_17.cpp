/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 17:22:28
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 17:34:24
*/


//例3-17 c++系统函数
//系统函数的应用举例：
//从键盘输入一个角度值，求出正弦余弦正切值
//sin  cos tan

#include <iostream>

#include <cmath>

using namespace std;

int main()
{
	const  double  PI = 3.14159265358979;
	double angle;
	cout << "Enter a angle: ";
	cin >> angle;
	double radian = angle * PI / 180; //转为弧度
		
	cout << "sin(" << angle << ") = " << sin(radian) << endl;
	cout << "cos(" << angle << ") = " << cos(radian) << endl;
	cout << "tan(" << angle << ") = " << tan(radian) << endl;


	return 0;
}