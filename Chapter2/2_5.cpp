/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-06 00:01:04
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 19:53:08
*/

//例2_5：求自然数1-10的和
//计算机循环简单重复：计算机执行速度快但需求要明确，越简单越好,处理大批量数据
//while(bool)
#include <iostream>

using namespace std;

int main()
{
	int i(1), sum(0);
	while( i <= 10)
	{
		sum += i;
		i++;
	}
	cout << "sum = " << sum << endl;
	return 0;
}