/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 18:47:47
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 18:51:30
*/
//实验二：实验3
#include <iostream>
using namespace std;

int main()
{
	int a, b, x;
	cout << "input value of a:\n";
	cin >> a;
	cout << "input value of b\n";
	cin >> b;
	x = (a - b) > 0 ? (a-b) : (b-a);
	cout << "The difference of a and b is:" << x << endl;
	return 0;
}