/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 19:41:11
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 19:48:40
*/

//例2-4:输入一个0～6的整数，转换成星期输出
//switch case break语句
#include <iostream>
using namespace std;
int main()
{
	int day;
	cout << "Please enter a number(0~6):";
	cin >> day;
	switch(day)
	{
		case 0: 
			cout << "Sunday" << endl;
			break;
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		default: //optional
			cout << "Day out of range Sunday .. Saturday " << endl; 
			break;
	}
	return 0;
}
