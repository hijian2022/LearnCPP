/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 08:32:33
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 14:18:20
*/


//例3-3:求圆周率PI
//PI = 16 * arctan(1/2)- 4 * arctan(1/239);
//arctan = x^1/1 - x^3/3 + x^5/5-...

#include <iostream>

using namespace std;

// double power(double x, int n);

double qiuartan(double x) //求arctan(x)
{
	double X = x, r = X;
	int i = 1;  //第i位级数
	while( X > 1e-15){
		i++;
		X = X * (x * x)/ (2 * i - 1) * (2 * i - 1 - 2); //第i位级数为/2i-1*2i-3
		r = ( i % 2 == 1) ? r + X : r - X; //第i位级数正负号就是奇偶判断的结果
		// r = (i%4 == 1) ? r + X : r -X;   //这里比较巧妙，求4余判断正负号
	}
	return r;
}

int main()
{
	double PI;
	cout << "PI is:" 
	     << qiuartan(1/5.0) * 16.0 - qiuartan(1/239.0) * 4.0  //1/5.0是为了结果为double型
	     << endl; 
	return 0;
}

// double power(double x, int n)
// {
// 	double val = 1.0;
// 	while(n--)
// 		val *= x;
// 	return val;
// }