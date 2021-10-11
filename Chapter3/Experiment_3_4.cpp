/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 18:57:02
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 18:59:18
*/

//实验三：例题二
//输入x,y
//调用系统pow函数输出

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter x and y: ";
	cin >> x >> y;
	cout << pow(x, y) << endl;
	return 0;
}