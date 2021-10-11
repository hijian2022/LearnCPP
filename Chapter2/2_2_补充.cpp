/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 18:17:49
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 18:32:06
*/

//2_2补充:为常量命名
/*
#include <iostream>
using namespace std;

int main()
{
	const double pi(3.14159); //符号常量必须初始化
	int radius;
	cout << "Please enter the radius!\n";
	cin >> radius;
	cout << "The radius is:" << radius << '\n';
	cout << "PI is:" << pi << '\n';
	cout << "Please enter a differenr radius!\n";
	cin >> radius;
	cout << "Now the radius is changed to:" << radius << '\n';
	cout << "PI is still:" << pi << '\n';
	return 0;
}
*/

//2_2补充:变量初始化
#include <iostream>
using namespace std;

int main()
{
	const double pi(3.14159); //符号常量必须初始化
	int radius(0);
	cout << "The initial radius is:" << radius << '\n';
	cout << "PI is:" << pi << '\n';
	cout << "Please enter a differenr radius!\n";
	cin >> radius;
	cout << "Now the radius is changed to:" << radius << '\n';
	cout << "PI is still:" << pi << '\n';
	return 0;
}