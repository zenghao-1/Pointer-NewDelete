#include <iostream>
#include <string>
using namespace std;

// Charactor �ṹ����������

struct Charactor
{
	string Name;
	float Health;

	Charactor();

	void PrintName();	
	void PrintHealth();
};

//����������

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		Charactor* charactor = new Charactor();//���䶯̬�ڴ�ռ䣬�ڶ��ϴ���

		charactor->PrintName();
		charactor->PrintHealth();
		
		cout << "-----------------------------------" << endl;

		delete charactor;//�����̬�ڴ棬�ڶ������
	}

}

// Charactor �ṹ���ں�������

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




