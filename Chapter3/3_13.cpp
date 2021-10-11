/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 16:18:30
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 16:26:53
*/

//回头再看


//可变参数的函数
//1参数类型相同initializer_list标准库类型
//2实参类型不同 用可变参数模版
//initializer_list头文件 
//initializer_list表示某种特定类型的值的数组

//initializer_list<int> lst{a, b, c};
//list.size() list.begin() list.end() lst2=lst lst3(lst)

#include <iostream>
#include <initializer_list>
using namespace std;

int main()
{
	initializer_list<int> lst1{a=0, b=1, c=2};
	return 0;
}