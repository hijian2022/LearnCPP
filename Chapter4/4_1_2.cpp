/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 19:51:28
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 23:05:47
*/

//例4-1-修改1:钟表类
//构造函数 

#include <iostream>
using namespace std;

class Clock{
	public:
		Clock(int newH, int newM, int newS);//构造函数
		void setTime(int newH=0, int newM=0, int newS=0);
		void showtime();
	private:
		int hour, minute, second;
}; //定义类后要有分号

void Clock::setTime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}

//构造函数不能有返回值
void Clock::showtime()
{
	cout << hour << ":" << minute << ":" << second << endl; 
}

//初始化列表构造函数
Clock::Clock(int newH, int newM, int newS):hour(newH), minute(newM), second(newS){}; 

int main()
{
	Clock c(0, 0, 0); //调用构造函数 
	//如果Clock c会出错
	c.showtime();
}