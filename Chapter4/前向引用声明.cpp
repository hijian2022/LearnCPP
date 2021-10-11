/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-09 08:03:34
* @Last Modified by:   hj
* @Last Modified time: 2021-10-09 08:05:51
*/

#include <iostream>
using namespace std;

class B; //前向引用声明 不能设计细节

class A {
public:
	// A a1;//不能
	void f(B b);
}

class B{
public:
	void g(A a);
}

int main()
{
	return 0;
}