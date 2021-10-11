/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 16:27:00
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 17:13:54
*/

//例3-14 内联函数举例

//实现不太复杂的功能 且加快执行速度，选用内联函数

//内联函数内不能用循环和switch
//定义必须在调用之前
//不能进行异常接口声明（回头看）

#include <iostream>
using namespace std;

const double PI = 3.14159265358979;

inline double calArea(double radius)
{
	return PI * radius * radius;
}

int main()
{
	double r = 3.0;
	double area = calArea(r);
	cout << area << endl; 
	return 0;
}

/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 16:34:04
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 16:50:41
*/

//例3-14_2:constexpr函数
//所有参数为constexpr时返回为constexpr
//有且只有一条return语句
//编译期间可计算 ,如constexpr int s = get()就不是 get需要看情况

// #pragma GCC diagnostic error "-std=c++11"
#include <iostream>
using namespace std;


constexpr int get_size(){
	return 20;
}


int main()
{
	constexpr int foo = get_size();
	cout << foo << endl;
	return 0;
}

/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 16:54:01
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 17:03:15
*/

//例3-14_3 ：带默认参数的函数

//默认参数必须在最右边
//实参初始化从左到右初始化

//如果声明在定义前面，则应该声明时放默认参数
//如果声明在定义之后，均可以


#include <iostream>
using namespace std;


int add(int x, int y) {
	return x + y;
}

int main()
{
	int add(int x = 5, int y = 6);
	//原型声明在定义之前

	cout << add(10, 20) << endl;
	cout << add(10) << endl;
	cout << add() << endl;
	return 0;
}

