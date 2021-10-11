/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 23:19:12
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 23:35:40
*/

//声明一个表示时间的结构体，可以精确表示年、月、日、时、分、秒；
//提示用户输入年、月、日、时、分、秒的值
//然后完整地显示出来。

#include <iostream>
using namespace std;

int main()
{
	struct iTime{
		unsigned int year;
		unsigned int month;
		unsigned int day;
		unsigned int hour;
		unsigned int minute;
		unsigned int second;
	};
	iTime T;
	cout << "Please enter the time: "<< endl;

	cout << "Year: ";
	cin >> T.year;
	
	cout << "month: ";
	cin >> T.month;
	
	cout << "day: ";
	cin >> T.day;
	
	cout << "hour: ";
	cin >> T.hour;
	
	cout << "minute: ";
	cin >> T.minute;
	
	cout << "second: ";
	cin >> T.second;
	
	cout << "The time is set to: " 
								<< T.year << "-" 
								<< T.month << "-" 
								<< T.day<< " " 
								<< T.hour << ":" 
								<< T.minute << ":" 
								<< T.second 
								<< endl;
	return 0;
}