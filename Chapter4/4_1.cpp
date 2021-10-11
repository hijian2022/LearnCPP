/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 19:44:01
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 19:50:35
*/

//例4-1:钟表类

#include <iostream>
using namespace std;

class Clock{
	public:
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

void Clock::showtime()
{
	cout << hour << ":" << minute << ":" << second << endl; 
}

int main()
{
	Clock myClock;
	myClock.setTime(); //调用带默认参数的函数
	myClock.showtime();
}