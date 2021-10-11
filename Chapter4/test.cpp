/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 20:18:36
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 23:02:57
*/

//复制构造函数

#include <iostream>
using namespace std;

class Point{
	public:

		Point(int xx = 0, int yy = 0) { x = xx; y = yy;} //内联构造函数

		// Point(const Point& p) = delete; //不生成默认复制构造函数
		//c 98中是声明为private类型并不提供实现，C++11中用delete提示

		Point (const Point &p);//拷贝构造函数

		int getX();
		int getY();
		void setX(int n);
		void setY(int n);
		
	private:
		int x, y;
};

//拷贝构造函数实现
Point::Point(const Point &p)
{
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

void Point::setX(int n)
{
	x = n;
}

void Point::setY(int n)
{
	y = n;
}

void fun1(Point p)
{
	cout << p.getX() << endl;
}

Point fun2()
{
	Point a(1, 2);
	return a;
}

int main()
{
	Point a(4, 5); //第一个对象A
	Point b(a);//情况一：用A初始化B，第一次调用复制构造函数
	cout << b.getX() << endl;

	fun1(b); //情况二：对象B作为fun1的实参，第二次调用拷贝构造函数
	
	b = fun2(); //情况三：函数的返回值是类对象，函数返回时，调用默认复制构造函数
	cout << b.getX() << endl;
	
	return 0;
}