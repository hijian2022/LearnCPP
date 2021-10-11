/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-09 08:16:59
* @Last Modified by:   hj
* @Last Modified time: 2021-10-09 09:04:38
*/
 

//例4-8 共用体（联合体）

//使用联合体保存成绩信息并且输出
//union最大字节存储

#include <iostream>
using namespace std;

class ExamInfo 
{
private:
	string name; //课程名称
	enum {GRADE, PASS, PERCENTAGE} mode; //记分模式
	union {
		char grade; //成绩等级
		bool pass; //是否通过
		int percent; //百分制成绩 //union为4个字节（最多字节）
	};
public:
	ExamInfo(string name, char grade):name(name), mode(PASS), grade(grade) {}
	ExamInfo(string name, bool pass):name(name), mode(PASS), pass(pass){}
	ExamInfo(string name, int percent):name(name), mode(PERCENTAGE), percent(percent){}
	void show();
};

void ExamInfo::show()
{
	cout << name << ": ";
	switch(mode) 
	{
		case GRADE:
			cout << grade; 
			break;
		case PASS:
			cout << (pass? "PASS":"FAIL");
			break;
		case PERCENTAGE:
			cout << percent;
			break;
	}
	cout << endl;
}

int main()
{
	ExamInfo course1("English", 'B');
	ExamInfo course2("Calculus", true);
	ExamInfo course3("C++ Programming", 85);
	course1.show();
	course2.show();
	course3.show();
	return 0;
}