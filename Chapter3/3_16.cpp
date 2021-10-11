/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 17:15:16
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 17:20:48
*/

//3-16函数重载
//编译多态性
//个数不同/类型不同，不是以返回值来区分


//编写两个名为sumOfSquare的重载函数，分别求两整数的平方和
//以及两个实数的平方和

#include <iostream>
using namespace std;

double sumOfSquare(double x, double y)
{
	return x * x + y * y;
}

int sumOfSquare(int x, int y)
{
	return x * x + y * y;
}

int main()
{
	cout << sumOfSquare(0.5, 0.5) << endl;
	cout << sumOfSquare(2, 2) << endl;
	return 0;
}