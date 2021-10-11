/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-06 00:05:10
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 20:09:09
*/


//例2-6:输入一个数字，翻转后输出(整除求余法)
//do while语句 至少执行一次循环

#include <iostream>
using namespace std;


/*
int main()
{
	int n, right_digit, newnum = 0;

	cout << "Enter the number: ";
	cin >> n;
	cout << "The number in reverse order is ";
	do{
		right_digit = n % 10;
		cout << right_digit;  //总要输出一位数
		n /= 10;
	} while (n != 0);
	cout << endl;
	return 0;
}*/

//用do while输出1-10的和 
/*
int main()
{
	int i = 1, sum = 0;
	do{
		sum += i;
		i++;
	}while (i <= 10);
	cout << sum << endl;
	return 0;
}
*/

//例2-8
//求输入一个整数的因子
// int main()
// {
// 	int n;
// 	cout << "请输入一个数字:";
// 	cin >> n;
// 	cout << "factor:";

// 	for(int k = 1; k <= n; k++)
// 		if(n%k == 0)
// 			cout << k << " ";
// 	cout << endl;
// 	return 0;
// } 

//例2-10
// //输入一系列整数，统计出正整数个数i和负整数个数j,读入0则结束
// int main()
// {
// 	int n;
// 	int positive(0), negative(0);
// 	cout << "请输入一系列整数：";
// 	cin >> n;
// 	while(n!=0)
// 	{
// 		if(n>0) 
// 			++positive;
// 		else
// 			++negative;
// 		cin >> n; //输入下一个数
// 	}
// 	cout << "正数个数:" << positive << endl;
// 	cout << "负数个数:" << negative << endl;
// 	return 0;
// }

// //枚举类型 例2-11
// enum GameResult{WIN, LOSE, TIE, CANCEL};

// using Intx int;
// int main()
// {
// 	GameResult result;
// 	enum GameResult omit = CANCEL; //带enum不带enum都可以
// 	for (int count = WIN; count <= CANCEL; count++)
// 	{
// 		result = GameResult(count);
// 		if(result == omit)
// 			cout << "The game was cancelled" << endl;
// 		else
// 		{
// 			cout<<"The game was played";
// 			if(result == WIN) cout << "and we won!";
// 			if(result == LOSE) cout << "and we lost";
// 			cout << endl;
// 		}
// 	}

// 	Intx a = 9;
// 	cout << a;
// 	return 0;
// }

// //2-35 9*9乘法表
// int main()
// {
// 	for(int i = 1; i <=9; i++)
// 	{
// 		for(int j = 1; j <= i; j++)
// 		{
// 			cout << j << "x" << i << "=" << j*i << " ";
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }


// // //2-34 口袋取球
// int main()
// {
// 	for(int i = 1; i <=9; i++)
// 	{
// 		for(int j = 1; j <= i; j++)
// 		{
// 			cout << j << "x" << i << "=" << j*i << " ";
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }
