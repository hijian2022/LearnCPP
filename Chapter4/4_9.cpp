/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-09 08:36:09
* @Last Modified by:   hj
* @Last Modified time: 2021-10-09 08:38:43
*/


//例4-9枚举类

//枚举类 c++11 强类型枚举（整型不能隐含转换、无法比较不同枚举类）
//Type::General //避免重名 


#include <iostream>
using namespace std;

enum class Side{Right, Left};
enum class Thing{Wrong, Right};

int main()
{
	Side s = Side::Right;
	Thing w = Thing::Wrong;
	cout << (s ==w) << endl; //编译报错
	return 0;
}