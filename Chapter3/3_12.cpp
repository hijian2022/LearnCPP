/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 16:15:15
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 16:18:02
*/

//例3-11 输入两个整数交换后输出（引用传递）

//引用必须初始化
//引用不是对象,引用并没有在程序中占据内存空间,故没有地址的说法.

#include <iostream>
using namespace std;
void swap(int& a, int& b)
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