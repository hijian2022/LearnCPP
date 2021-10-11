/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 20:37:15
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 20:42:37
*/

#include <iostream>
using namespace std;

//实验二：例题一 完成例2.7 do while实现
//用do while输出1-10的和 
// int main()
// {
// 	int i = 1, sum = 0;
// 	do{
// 		sum += i;
// 		i++;
// 	}while (i <= 10);
// 	cout << sum << endl;
// 	return 0;
// }

//do while改成for

int main()
{
	int i = 0, sum = 0;
	for(i = 1; i<=10; i++)
		sum += i;
	cout << "sum = " << sum << endl;
	return 0;
}
