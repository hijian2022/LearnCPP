/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 20:15:06
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 20:20:21
*/

//例2-10:嵌套的控制语句
// //输入一系列整数，统计出正整数个数i和负整数个数j,读入0则结束

#include <iostream>
using namespace std;

int main()
{
	int i = 0, j = 0, n;
	int positive(0), negative(0);
	cout << "Enter some integers plese (enter 0 quit):" << endl;
	cin >> n;
	while(n != 0) //不知道循环多少次用while
	{
		if(n > 0) i += 1;
		if(n < 0) j += 1; 
		cin >> n; //输入下一个数
	}
	cout << "Count of positive integers: " << i << endl;
	cout << "Count of negative integers: " << j << endl;
	return 0;
}