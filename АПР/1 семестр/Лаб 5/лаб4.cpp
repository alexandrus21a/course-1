#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;//����������� ������ ���� ��� ������ ������(cin,cout)

//������� ������� ��-1-2 �������� ���������

int main ()
{
	SetConsoleCP(1251);//������������ ��������� 1251 ��� ����������� ��������
    SetConsoleOutputCP(1251);//������������ ��������� 1251 ��� ����������� ��������
    double chislo,chislo1;//��������� ������� �������� ���������
    cout<<"������ ��� ����� ";//������ ������� ����� ����� ��������� cout
	std::cin>>chislo;//������� ���� � ��������
	std::cin>>chislo1;//������� ���� � ��������
    if (chislo>chislo1){//��������� ����� ��� �������� 䳿
    cout<<chislo<<" ����� �� "<<chislo1<<endl;//������ ������� ����� ����� ��������� cout
    } else if (chislo<chislo1) //��������� ����� ��� �������� 䳿
	{
    cout<<chislo1<<" ������ �� "<<chislo<<endl;//������ ������� ����� ����� ��������� cout	
	}	
	return 0;
  	
}
