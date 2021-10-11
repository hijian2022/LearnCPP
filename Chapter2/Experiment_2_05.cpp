/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 20:43:05
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 23:17:27
*/


//实验二：例二 编程计算图形的面积
//程序可计算圆形、长方形、正方形的面积，运行时先提示
//用户选择图形的类型，然后对圆形要求输入半径值，
//对长方形要求用户输入长和宽的值，对正方形要求用户输入
//边长的值，计算出面积的值后将其显示出来

#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.14159;
	enum shapes {circle, rectangle, square};
	int x;
	float radius, sideX, sideY, side;
	cout << "Enter 1-circle, 2-rectangle, 3-square, 0-quit: ";
	cin >> x;
	while(x != 0)
	{
		switch(x)
		{
			case 1: //注意case 后面用1，而不是char类型（x为int类型，不要写成'c'）
				cout << "Enter the radius: ";
				cin >> radius;
				cout << "The area of the circle is: " << PI * radius * radius << endl;
				break;
			case 2:
				cout << "Enter the sideX: ";
				cin >> sideX;
				cout << "Enter the sideY: ";
				cin >> sideY;
				cout << "The area of the rectangle is: " << sideY * sideX << endl;
				break;
			case 3:
				cout << "Enter the side: ";
				cin >> side;
				cout << "The area of the square is: " << side * side << endl;
				break;
		}
		cout << "Please enter again: ";
		cin >> x;
	}
	return 0;
}