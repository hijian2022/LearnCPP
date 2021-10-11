/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 18:09:31
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 18:15:11
*/

//读入并显示整数

#include <iostream>
using namespace std;

int main()
{
	int radius;
	// cout << radius;  //未初始化之前为一个垃圾数值
	cout << "Please enter the radius\n";
	cin >> radius;
	cout << "The radius is:" << radius << '\n';
	cout << "PI is:" << 3.14 << '\n';
	cout <<"Please enter a differenr radius!\n";
	cin >> radius;
	cout << "Now the radius is changed to:"
		 << radius << '\n';
	return 0;
}