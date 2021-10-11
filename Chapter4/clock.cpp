/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 19:03:29
* @Last Modified by:   hj
* @Last Modified time: 2021-10-09 10:02:27
*/

//面向对象介绍-钟表抽象
//抽象封装继承多态



//构造函数不能有返回值，可以有形式参数 可以是内联函数 可以重载 可以带默认参数值
//Clock()与Clock(int newH = 0, int newM = 0, int newS = 0)为同一函数，不能同时出现
//均为默认构造函数





#include <iostream>
using namespace std;

class Clock{
	public: //在类中直接定义函数为内联函数或者在类外声明inline
		// Clock() = default; //编译器提供隐含生成默认构造函数
		

		Clock(int newH, int newM, int newS); //构造函数
		

		Clock(); //默认构造函数

		void setTime(int newH, int newM, int newS);
	 	void showtime();

	private:  //默认private
		int hour, minute, second; //类内初始值
	// protected: //差别在继承和派生上
};

void Clock :: setTime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock :: showtime()
{
	cout << hour <<":" << minute << ":" << second << endl;
}

// Clock::Clock(int newH, int newM, int newS):hour(newH), minute(newM), second(newS) {
// } //构造函数初始化列表初始化

// Clock::Clock():hour(0), minute(0), second(0){}; //默认构造函数

Clock::Clock(int newH, int newM, int newS):hour(newH), minute(newM), second(newS){}

Clock::Clock():Clock(0, 0, 0){} //委托构造函数

int main()
{
	Clock c1(8, 10, 0);
	Clock c2; //调用无参数的默认构造函数

	// myClock.setTime(19); //如果参数少于三个，即用默认参数 19:0:0
	// myClock.showtime();
	c1.showtime();
	c2.showtime();
	return 0;

}

