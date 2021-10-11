/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 14:56:51
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 15:56:26
*/

//例3-10 递归 汉诺塔问题
//ABC三个针，将A上N个盘子移到C针
//分解
//1、A的n-1个盘子移到B针（借助C）
//2、A剩下的一个移到C针
//3、B的n-1个盘子移到C针（借助A针）


#include <iostream>
using namespace std;

void move(char src, char dest)
{
	cout << src << "->" << dest << " ";
	cout << endl;
}


int hannoi (int n, char src, char medium, char dest)
{
	static int i =1;
	if(n == 1)
		move(src, dest);
	else {
		hannoi(n-1, src, dest, medium);i++;
		move(src, dest);
		hannoi(n-1, medium, src, dest);i++;
	}

	return i;
}


int main()
{
	int m;
	cout << "Enter the number of diskes: ";
	cin >> m;
	cout << "the steps to moving " << m << " diskes" << endl;
	int k = hannoi(m, 'A', 'B', 'C');
	cout<< k << "times" << endl;
	return 0;
}
