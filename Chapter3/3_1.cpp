/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 07:43:22
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 07:50:23
*/

//例3-1:编写一个求X的n次方的函数
#include <iostream>
using namespace std;

double power(double x, int n)
{
	double val = 1.0;
	while(n--)
		val *= x;
	return val;
}

int main()
{
	double pow, x;
	cout << "Please enter a double integer: ";
	cin >> x;
	pow = power(x, 2);
	cout << x << " to the power 2 is: " << pow << endl;
	return 0;
}