/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 17:37:17
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 17:50:29
*/

//实验三（上）函数的应用
//例题一
//编写函数float Convert(float TempFer)
//参数返回值均为float类型
//实现算法 C= (F-32)*5/9

#include <iostream>
using namespace std;

int main()
{
	float TempFer;
	float Convert(float TempFer);

	cout << "Enter a TempFer: ";
	cin >> TempFer;
	cout << Convert(TempFer) << endl;
	return 0;
}

float Convert(float F)
{
	float C;
	C = (F - 32) * 5.0 / 9;
	return C;
}