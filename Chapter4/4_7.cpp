/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-09 08:15:33
* @Last Modified by:   hj
* @Last Modified time: 2021-10-09 09:08:37
*/
//例4-7结构体：c++一种特殊的类
//默认为public类型

#include <iostream>
using namespace std;

struct Student{
	int num;
	string name;
	char sex;
	int age;
};

int main()
{
	Student stu = {97001, "Lin Lin", 'F', 19};
	cout << "Num : " << stu.num << endl;
	cout << "Name: " << stu.name << endl;
	cout << "Sex: " << stu.sex << endl;
	cout << "Age: " << stu.age << endl;
	return 0;
}