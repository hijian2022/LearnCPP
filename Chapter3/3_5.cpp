/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 12:16:25
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 13:17:19
*/

//例3-5:
//计算如下公式
// k = sqrt(sin^2 r+ sin^2 s); r^2<= s^2;
// k = 1/2*(sin(rs)); r^2> s^2;
// r s由键盘输入
//sinx = x/1!_ x^3/3!+x^5/5!+…… = 求和(-1^n-1)x^2n-1/(2n-1)! ;

#include <iostream>
#include <cmath>

using namespace std;	

double qiusinx(double x)
{
	double X;
	double sum = 0;
	int i = 0;

	X = x / 1.0;

	do {
		i++;
		sum = (i % 2 == 1) ? sum + X : sum - X;
		X *= (x * x) / (2 * i + 1) / (2 * i);
	}while(X > 1e-10); //至少执行一次
	return sum;
}


int main()
{
	double r, s;
	double k;

	cout << "r = ";
	cin >> r;

	cout << "s = ";
	cin >> s;

	if( r * r > s * s)
		k = 1 / 2.0 * qiusinx(r * s);
	else {
		k = sqrt(qiusinx(r) * qiusinx(r) + qiusinx(s) * qiusinx(s));
	}

	cout << "k is " << k << endl;

	return 0;
}