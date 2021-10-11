/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 18:01:23
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 18:13:42
*/

//实验三：例题二
//编写递归函数 int fib(int n),在主程序中输入n的值
//调用fib函数计算Fibonacci级数
// fib(n) = fib(n-1) + fib(n-2),n > 2;
// fib(1) = fib(2) = 1;

#include <iostream>
using namespace std;

int fib(int n){
	cout << "processing fib(" << n <<")...";
	if(n < 3)
		return 1;
	else
	{
		cout << "Call fib(" << n - 1 << ") fib(" << n-2 << ")" <<endl; 
		return (fib(n-1) + fib(n - 2)); 
	}
}

int main()
{
	int n;
	cout << "Please enter a number: ";
	cin >> n;
	cout << fib(n) << " is the answer!" << endl;
	return 0;
}