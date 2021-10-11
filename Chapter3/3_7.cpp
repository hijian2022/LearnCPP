/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 14:18:35
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 14:24:15
*/


//例3-7 ：输入两个整数，求平方和

//函数的嵌套调用-功能分解

#include <iostream>
using namespace std;

int fun2 (int x)
{
	return x * x;
}

int fun1(int x, int y)
{
	return fun2(x) + fun2(y);
}

int main()
{
	int x, y;
	cout << "Enter two integers: "; 
	cin >> x >> y;
	cout << x <<"^2 + " << y << "^2 = " << fun1(x, y) << endl;
	return 0;
}