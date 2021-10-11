/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-08 13:18:20
* @Last Modified by:   hj
* @Last Modified time: 2021-10-08 14:10:48
*/


//例3:投骰子
//每个骰子有六面，点数为123456
//游戏在开始时输入一个无符号整数，作为产生随机数的种子
//每轮投两次骰子，第一轮如果和为7/11 胜，游戏结束
//和为2/3/12则负游戏结束
//和为其他值则将此值作为自己的点数，继续下一轮
//直到某轮的和数等于点数则胜利，若此前和数为7则负

//学习任务自顶向下分解：
//1、投骰子单独一个生成函数
//2、第一轮投骰子switch判断
//3、不输不赢时反复投，直至赢或者输
//4、赢或者输，输出结果

#include <iostream>
#include <cstdlib> //调用随机数函数，在cstdlib头文件中
using namespace std;

int rolldice(int flag)
{
	int n, a, b;
	a = rand() % 6 +1;
	b = rand() % 6 +1;
	cout << flag << " times: pleyer rolled " 
		 << a << "+" << b << "=" << a+b 
		 << endl;
	return (a+b);
}

enum GameStatus {WIN, LOSE, PLAYING};
int main()
{
	unsigned int seed;
	int sum, point;
	GameStatus status;
	int flag = 0; //记录投了几次

	cout << "Enter a unsigned integer : ";
	cin >> seed;
	srand(seed); //让每次调用真随机数

	flag++;	
	sum = rolldice(flag);

	switch (sum){
		case 7:
		case 11:
			status = WIN;
			break;
		case 2:
		case 3:
		case 12:
			status = LOSE;
			break;
		default:
			status = PLAYING;
			point = sum;
			cout << "Point is " << point << endl;
			break;
	}

	//下一轮一直循环，知道WIN/LOSE
	while(status == PLAYING){
		flag++;
		sum = rolldice(flag);
		if(sum == point) status = WIN;
		else if(sum == 7) status = LOSE;
	} 

	if(status == WIN) cout << "player wins!" << endl;
	if(status == LOSE) cout << "player loses" << endl;

	return 0;
}