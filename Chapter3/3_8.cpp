/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 14:25:54
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 14:35:52
*/

//例3-8 函数递归调用 计算n!

#include <iostream>
using namespace std;

unsigned int fun1(int x)
{
	unsigned sum; //unsigned int可以缩写为unsigned
	if(x == 0)
		sum = 1; //0的阶乘为1
	else 
		sum = x * fun1(x-1);
	return sum;
}

int main()
{
	unsigned n, sum;
	cout << "Enter a number: ";
	cin >> n;
	sum = fun1(n);
	cout << n << "! = " << sum << endl;
	return 0;
}