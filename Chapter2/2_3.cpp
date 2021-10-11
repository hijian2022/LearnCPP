/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 19:31:39
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 19:40:06
*/

//例2-3:输入两个整数字，比较两个数大小

//if else 嵌套使用

#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter x and y:";
	cin >> x >> y;
	if(x != y)
		if(x > y)
			cout << x << ">" << y << endl;
		else 
			cout << x << "<" << y << endl;
	else
		cout << x << "=" << y << endl;
	return 0;
}