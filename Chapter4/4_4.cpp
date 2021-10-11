/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-09 07:17:11
* @Last Modified by:   hj
* @Last Modified time: 2021-10-09 08:02:43
*/

//例4-3 ：线段类构造函数
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
	Point(int xx =0, int yy = 0){
		x = xx;
		y = yy;
	}
	Point(Point &p); //点类的拷贝构造函数
	int getX() {return x;}
	int getY() {return y;}
private:
	int x,y;

};

Point::Point(Point &p) //点类拷贝构造的实现
{
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor of Point" << endl;
}

class Line{
public:
	Line(Point xp1, Point xp2);
	Line(Line &I); //线段类构造函数
	double getLen() {return len;}
private:
	Point p1, p2; //线段类用点类对象组合成成员
	//先定义先初始化
	double len;
};


//初始化列表也会调用一次拷贝构造
Line::Line(Point xp1, Point xp2):p1(xp1), p2(xp2){ //线段类构造函数
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY()- p2.getY());
	len = sqrt(x * x + y * y);
}

// Line::Line(Point xp1, Point xp2){ //线段类构造函数
// 	p1 = xp1;
// 	p2 = xp2; //对象可以直接赋值，仅仅是成员变量赋值
// 	//cout << "Calling constructor of Line" << endl;
// 	double x = static_cast<double>(p1.getX() - p2.getX());
// 	double y = static_cast<double>(p1.getY()- p2.getY());
// 	len = sqrt(x * x + y * y);
// }

Line::Line(Line &I):p1(I.p1), p2(I.p2){ //线段类拷贝构造函数
	cout << "Calling the copy constructor of Line" << endl;
	len = I.len;
}

int main()
{
	Point myp1(1,1), myp2(4,5); 
	Line line(myp1, myp2); //调用4次Point拷贝构造调用 （形参实参结合2次+2次初始化列表）
	Line line2(line); //调用两次Point拷贝构造函数（2次初始化列表）
	cout << "The length of the line is: ";
	cout << line.getLen() << endl;
	cout << "The length of the line2 is: ";
	cout << line2.getLen() << endl;
	return 0;
}