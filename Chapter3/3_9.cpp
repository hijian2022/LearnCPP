/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 14:37:18
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 15:25:47
*/


//例3-9:递归二
//用递归法计算从n个人中选择k个人的组合数，组成一个委员会的不同组合

#include <iostream>
using namespace std;

int comm(int n, int k)
{
	int chose;
	if(k > n)
		return 0;
	else if(n == k || k == 0)
	{
		chose = 1;
		// cout << k << "-";
		// cout << endl;
	}
	else {
		chose = comm(n-1, k) + comm(n-1, k-1);
		// n-1个人选k个和n-1个人中选k-1个
		// c 6 2 = c 5 2 + c 5 1
	}
	return chose;
}

int main()
{
	int n, k;
	cout << "Please person number: ";
	cin >> n;
	cout << "Enter chose person: ";
	cin >> k;
	
	cout << comm(n, k) << " choses" << endl;
	return 0;
}