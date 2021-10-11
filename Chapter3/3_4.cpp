/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 10:53:24
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 14:13:47
*/

//例3-4 ：寻找并输出11～99之间的数m
//它满足m m^2 m3均为回文数

#include <iostream>

using namespace std;

bool symm(int n)
{
	int sum = 0, temp, x = n;
	while(n){

		/* 如果是逆序:除以10取余
		x = n % 10;  //最低位数字 9
		cout << x; // 逆序输出
		n = n / 10;  //去掉最低位
		*/

		/*如果是判断回文数就是要保存每次的最低位
		*/

		// 989 = (9*10+8)*10+9	

		temp = n % 10; 
		sum = sum * 10 + temp; //先取出的数先乘以10
		n = n / 10;

 	   
	}
	return (sum == x);
}

int main()
{
	for(int i = 11; i <= 999; i++)
	{
		if(symm(i) && symm(i * i) && symm(i * i * i))
			cout << "i =" << i << "\t" 
				 << "i * i =" << i * i << "\t" 
				 << "i * i * i=" << i * i *i << endl;
	}
	return 0;
}
