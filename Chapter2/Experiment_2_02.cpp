/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-07 18:43:28
* @Last Modified by:   hj
* @Last Modified time: 2021-10-07 18:47:08
*/

//实验二：实验2
#include <iostream>
using namespace std;

int main()
{
	unsigned int x;
	unsigned int y = 100;
	unsigned int z = 50;
	x = y - z; 
	cout << "Difference is: " << x;
	x = z -y;  // z-y为负值，溢出
	cout << "\nNow Difference is: " << x << endl; 
	return 0;
}