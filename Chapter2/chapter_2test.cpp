/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 18:52:58
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 19:29:37
*/

//第二章：数据输入输出-测试
//C++中IO流类库操纵符 dec hex oct ws endl ends setprecision(int)精度包括小数点 setw(int)

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x;
	cout << "cout为预定义的插入运算符" << endl;
	cout << "cin为预定义的提取运算符" << endl << endl;

	cout << "1024(10)->十进制:";
	cout << dec << 1024 << endl;
	cout << "1024(10)->十六进制:";
	cout << hex << 1024 << endl;
	cout << "1024(10)->八进制:";
	cout << oct << 1024 << endl; //注意这里改成了八进制

	// cout << endl;

	// cout << "ws一般用在输入流，去掉空白符号" << endl; 
	// cin >> ws >> x;
	// cout << x << endl; //?

	/*string s;
	// cin >> ws;  //若不用这一行则输入的前导空格全部输出 eg： "    abc"
	getline(cin,s);
	cout << s;*/

	// cin >> x;
	cout << setw(10) << dec << 12 << endl; //注意这里dec要不然会输出八进制

	cout << setprecision(3) << 3.1418992833 << endl; //包含小数点在内精度 eg:3.14
	return 0;
}
