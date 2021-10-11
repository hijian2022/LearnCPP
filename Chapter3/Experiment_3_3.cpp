/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 18:14:44
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 18:55:41
*/

//实验三（下）函数的应用
//分别编写4个同名函数max1,实现函数的重载
//可分别求两个整数、三个整数、两个双精度数、三个双精度数的最大值
//在main中测试函数的功能


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int max1(int x, int y); //求两个整数的最大值
int max1(int x, int y, int z);//求三个整数的最大值
double max1(double x, double y);//求两个双精度的最大值
double max1(double x, double y, double z);//求三个双精度的最大值

int main()
{
	// int x, y, z;


	double x1, y1, z1;
	
	// cout << "求两个中最大值: ";
	// cin >> x >> y;
	// cout << max1(x, y) << " is maxmun" << endl;

	// cout << "求三个中最大值: ";
	// cin >> x >> y >> z;
	// cout << max1(x, y, z) << " is maxmun" << endl;

	cout << "求两个浮点数中最大值: ";
	cin >> x1 >> y1;
	cout << setprecision(15) << setiosflags(ios::fixed) << max1(x1, y1) << " is maxmun" << endl;
	//iosflags用定点数表示
	cout << "求三个浮点数中最大值: ";
	cin >> x1 >> y1 >> z1;
	cout << setprecision(15) << setiosflags(ios::fixed) << max1(x1, y1, z1) << " is maxmun" << endl;

	return 0;

}

int max1(int x, int y)
{
	return x = (x > y) ? x : y; 
}

int max1(int x, int y, int z)
{
	int m1, m2;
	m1 = x > y ? x : y;
	m2 = m1 > z ? m1 : z; //或者max1(max1(x, y), z);
	return m2;

}

double max1(double x, double y) //比较浮点数用差值小于多少
{
	cout << "执行重载double类型函数:" << endl;
	//return x = (x - y > 1e-10) ? x : y; 
	
	double MAX;
	if(abs(x - y) < 1e-10) 
		MAX = x; //判断是否相等
	else if(x >= y) 
		MAX = x;
	else 
		MAX = y;
	// cout << "MA: " << setprecision(8) << setiosflags(ios::fixed) << MAX << endl;
	return MAX;
}

double max1(double x, double y, double z)
{
	return max1(max1(x, y), z);
}




