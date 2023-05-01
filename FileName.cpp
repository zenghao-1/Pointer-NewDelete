#include <iostream>
#include <string>
using namespace std;

// Charactor 结构体主体声明

struct Charactor
{
	string Name;
	float Health;

	Charactor();

	void PrintName();	
	void PrintHealth();
};

//主函数部分

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		Charactor* charactor = new Charactor();//分配动态内存空间，在堆上创建

		charactor->PrintName();
		charactor->PrintHealth();
		
		cout << "-----------------------------------" << endl;

		delete charactor;//清除动态内存，在堆上清除
	}

}

// Charactor 结构体内函数声明

Charactor::Charactor()
{
	Name = "Alex";
	Health = 100.f;
}

void Charactor::PrintName()
{
	cout << "Name:" << Name << endl;
}

void Charactor::PrintHealth()
{
	cout << "Health:" << Health << endl;
}




