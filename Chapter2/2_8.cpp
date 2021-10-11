/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 20:10:00
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 20:13:29
*/

//例2-8:输入一个整数，求出它的所有因子
//for循环
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Please enter a positive integer: ";
	cin >> n;
	cout << "Number " << n << " factor:" << endl;
	for(int k = 1; k <= n; k++)
		if(n % k == 0)
			cout << k << " ";  //所有可以整除的数为因子
	cout << endl;
	return 0;
} 
