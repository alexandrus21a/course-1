#include <Windows.h>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//������� ������� ��-1-2 �������� ���������
int main ()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
  	string mystr , hz1, hz2, cpu, cpu1, cpu2, ram, type, type1, type2, ram1, hz, ram2;
	cout << "�� ���� �����? ";
  	getline (cin, mystr);
  	cout << "�����! " << mystr << ".\n";
  	cout << "����� �������� ������� ����'����� ";
  	getline (cin, cpu);
 	cout << "����� ������� ��������� ������� ����'����� ";
  	getline (cin, hz);
  	cout << "����� ������� ��� ������� ����'����� ";
  	getline (cin, ram);
  	cout << "����� ��� ������� ����'����� ";
  	getline (cin, type);
  	
  	cout << "����� �������� ������� ����'����� ";
  	getline (cin, cpu1);
 	cout << "����� ������� ��������� ������� ����'����� ";
  	getline (cin, hz1);
  	cout << "����� ������� ��� ������� ����'����� ";
  	getline (cin, ram1);
  	cout << "����� ��� ������� ����'����� ";
  	getline (cin, type1);
  	
  	cout << "����� �������� ������� ����'����� ";
  	getline (cin, cpu2);
 	cout << "����� ������� ��������� �������� ����'����� ";
  	getline (cin, hz2);
  	cout << "����� ������� ��� �������� ����'����� ";
  	getline (cin, ram2);
  	cout << "����� ��� �������� ����'����� ";
  	getline (cin, type2);
  	
  	cout << setw(20) << "|�������������� ����|"<<endl;
	cout << left << setw(11) << "��������" <<"|"<< setw(11) << "�������" <<"|" <<  setw(11) << "���" <<"|" << setw(3) << "���" <<"|"<<endl;
	cout << left << setw(11) << cpu <<"|"<< setw(11) << hz <<"|" <<  setw(11) << ram <<"|" << setw(3) << type <<"|"<<endl;
	cout << left << setw(11) << cpu1 <<"|"<< setw(11) << hz1 <<"|" <<  setw(11) << ram1 <<"|" << setw(3) << type1 <<"|"<<endl;
	cout << left << setw(11) << cpu2 <<"|"<< setw(11) << hz2 <<"|" <<  setw(11) << ram2 <<"|" << setw(3) << type2 <<"|"<<endl;
	cout << left << "���: C - CISC-��������,R - RISC-��������" <<endl;
}
