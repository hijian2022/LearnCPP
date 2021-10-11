/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 16:09:35
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 16:13:16
*/

//例3-11 输入两个整数交换后输出（值传递）

#include <iostream>
using namespace std;
void swap(int a, int b)
{
	int t = a;
	a = b;
	b =t;
}

int main()
{
	int x = 5, y = 10;
	cout << "x= " << x << " y = " << y << endl;
	swap(x, y);
	cout << "x= " << x << " y = " << y << endl;
	return 0;
}