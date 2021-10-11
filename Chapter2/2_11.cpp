/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 20:23:41
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 20:35:21
*/

//例2-11:枚举类型

//某次体育比赛有4种结果WIN胜 LOSE负 TIE平局 CANCEL取消
//编写程序输出这四种可能

#include <iostream>
using namespace std;


//using NewType = OldType
//typedef OldType NewType
//auto val = 3.16
//decltype i(j) = 2

int main()
{
	enum GameResult {WIN, LOSE, TIE, CANCEL}; //枚举元素不能再赋值
	GameResult result; //两种定义枚举变量
	enum GameResult omit = CANCEL; //带enum不带enum都可以
	//枚举给整数常量可以
	for (int count = WIN; count <= CANCEL; count++)
	{
		result = GameResult(count); //整数常量给枚举赋值需要强制转换
		if(result == omit)
			cout << "The game was cancelled" << endl;
		else
		{
			cout<<"The game was played ";
			if(result == WIN) cout << "and we won!";
			if(result == LOSE) cout << "and we lost.";
			cout << endl;
		}
	}
	return 0;
}
