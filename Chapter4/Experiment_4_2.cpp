/*
* @Author: hjlab
* @Email: youhjxiang520@gmail.com
* @Date:   2021-10-09 09:28:58
* @Last Modified by:   hj
* @Last Modified time: 2021-10-09 11:29:58
*/


//实验四 下
//例题一
//学习部件组装构造


//在实验四（上）中声明的CPU类、RAM类、CDROM类基础上，再声明Computer类
//要求：
//1、其中声明私有数据成员cpu\ran\cdrom,声明公有成员函数run\stop ,可在其中输出提示信息
//2、在main()函数中声明一个Computer类的对象，调用其成员函数

//实验四 上
//例题一
//学习类的定义和构造
//声明一个CPU类，包含等级（rank）\频率（frequency）\电压(voltage)\等属性，有两个公有成员函数run\stop
//其中rank为枚举类型CPU_Rank，声明为enum CPU_Rank{P1 = 1,p2,p3,p4,p5,p6,p7}
//frequency为单位MHz的整型数，voltage为浮点型的电压值
//注意不同访问属性的成员访问方式，并观察构造函数及析构函数的调用顺序


//声明RAM类、CDROM类
//提示：RAM主要参数：容量、类型、主频，类型建议用枚举类型
//（DDR4/DDR3/DDR2...）

//CDROM类主要参数：接口类型、缓存容量、安装方式
//接口类型建议用枚举类型（SATA|USB） 安装方式建议用枚举类型
//（external/built-in）


#include <iostream>
using namespace std;

enum CPU_Rank{P1 = 1, P2, P3, P4, P5, P6, P7};

enum RAM_Type{DDR2 = 2, DDR3, DDR4};

enum ROM_Type{SATA, USB};
enum ROM_Install_Type{External, Bulitin};

class CPU
{
public:
	CPU(CPU_Rank r, int f, float v);
	~CPU();

	CPU(CPU &c){
		rank = c.rank;
		frequency = c.frequency;
		voltage = c.voltage;
		cout << "拷贝构造函数CPU一次：" << endl;
	}

	void SetRank(CPU_Rank r);
	void SetFrequency(int f);
	void SetVoltage(float v);	

	CPU_Rank GetRank();
	int GetVoltage();
	float GetFrequency();

	void Run();
	void Stop();
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
};


//CPU类的中的函数 

CPU::CPU(CPU_Rank r, int f, float v):rank(r), frequency(f), voltage(v){ 
	cout << "构造了一个CPU！" << endl;
}

CPU::~CPU(){
	cout << "析构了一个CPU！" << endl;
}

void CPU::SetRank(CPU_Rank r){
	rank = r;
	cout << "等级设置为："  << r << "级!" << endl;
}

void CPU::SetFrequency(int f){
	frequency = f;
	cout << "频率设置为: " << frequency << "MHz!" << endl;
}

void CPU::SetVoltage(float v){
	voltage = v;
	cout << "电压设置为: " << voltage << "V!" << endl;
}

CPU_Rank CPU::GetRank(){
	return rank;
}

int CPU::GetVoltage(){
	return voltage;
}

float CPU::GetFrequency(){
	return frequency;
}

void CPU::Run()
{
	cout << "CPU 开始运行！" << endl;
}

void CPU::Stop()
{
	cout << "CPU 停止运行！" << endl;
} 

//CPU类的函数实现结束



//RAM类中主要参数：容量、类型、主频，类型建议用枚举类型
class RAM
{
public:
	RAM(int c, RAM_Type t, float f){
		capacity = c;
		type = t;
		frequency =f;
		cout << "构造了一个RAM！" << endl;
	}

	RAM(RAM &r){
		capacity = r.capacity;
		type = r.type;
		frequency = r.frequency;
		cout << "拷贝构造函数RAM一次：" << endl;
	}

	~RAM(){
		cout << "析构了一个RAM！"  << endl;
	}

	void setCapacity(int c){
		capacity = c;
		cout <<"RAM容量设置为： " << capacity << endl;
	}

	void setType(RAM_Type t){
		type = t;
		cout <<"RAM类型设置为： " << type << endl;
	}

	void SetFrequency(float f){
		frequency = f;
		cout <<"RAM主频设置为： " << frequency << endl;
	}

	int GetCapacity() const{
		return capacity;
	}

	RAM_Type GetType() const{
		return type;
	}

	float GetFrequency()const{
		return frequency;
	}

	void Run(){
		cout << "RAM 正在运行!" << endl;
	}
	void Stop(){
		cout << "RAM 停止运行!" << endl;
	}

private:
	int capacity;
	RAM_Type type;
	float frequency;
};



//CDROM类主要参数：接口类型、缓存容量、安装方式
//接口类型建议用枚举类型（SATA|USB） 安装方式建议用枚举类型
//（external/built-in）

class CDROM
{
public:
	CDROM(ROM_Type t, int c, ROM_Install_Type t2){
		type = t;
		capacity = c;
		install_type = t2;
		cout << "构造了一个CDROM！" << endl;
	}

	CDROM(CDROM &cd){
		type = cd.type;
		capacity = cd.capacity;
		install_type = cd.install_type;
		cout << "拷贝一个CDROM构造函数！" << endl;
	}


	~CDROM(){
		cout << "析构了一个ROM！"  << endl;
	}

	void SetType(ROM_Type t){
		type = t;
		cout <<"CDROM 类型设置为： " << type << endl;
	}

	void SetCapacity(int c){
		capacity = c;
		cout <<"CDROM 容量设置为： " << capacity << endl;
	}

	void SetInstallType(ROM_Install_Type t2){
		install_type = t2;
		cout <<"CDROM 安装类型设置为： " << install_type << endl;
	}


	ROM_Type GetType(){
		return type;
	}

	int GetCapacity(){
		return capacity;
	}

	ROM_Install_Type GetInstallType(){
		return install_type;
	}

	void Run(){
		cout << "CDROM 开始运行!" << endl;
	}
	void Stop(){
		cout << "CDROM 停止运行!" << endl;
	}

private:
	ROM_Type type;
	int capacity;
	ROM_Install_Type install_type;
};



//1、其中声明私有数据成员cpu\ran\cdrom,声明公有成员函数run\stop ,可在其中输出提示信息
//2、在main()函数中声明一个Computer类的对象，调用其成员函数

class Computer
{
public:
	Computer(CPU c, RAM r, CDROM cd, int s, int b);
	~Computer(){cout << "析构了一个Computer!" << endl;}
	void Run(){
		mycpu.Run();
		myram.Run();
		mycdrom.Run();
		cout << "Computer 开始运行!" << endl;
	}
	void Stop(){
		mycpu.Stop();
		myram.Stop();
		mycdrom.Stop();
		cout << "Computer 停止运行!" << endl;
	}

private:
	CPU mycpu;
	RAM myram;
	CDROM mycdrom;
	int storage_size; //GB
	int bandwidth; //MB 
};

Computer::Computer(CPU c, RAM r, CDROM cd, int s, int b):mycpu(c), myram(r), mycdrom(cd){
	storage_size = s;
	bandwidth = b;
	cout << "构造了一个Computer!" << endl;
}

int main()
{
	CPU myCpu(P5, 100, 36.7); //先构造后析构
	myCpu.Run();
	myCpu.Stop();

	cout << "--------\n" << endl;

	RAM myRam(4, DDR2, 1024.56);
	myRam.Run();
	myRam.Stop();

	cout << "--------\n" << endl;
	
	CDROM myRom(SATA, 1000, Bulitin);
	myRom.Run();
	myRom.Stop();

	cout << "--------\n" << endl;

	Computer myComputer(myCpu, myRam, myRom, 128, 10);
	myComputer.Run();
	myComputer.Stop();

	cout << "--------\n" << endl;

	return 0;

}
