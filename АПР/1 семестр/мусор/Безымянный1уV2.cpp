#include <iostream>
#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

int main ()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
  	string mystr , NTU , ABC;
  	NTU="NTU";
  	cout << "�� ���� �����? ";
  	getline (cin, mystr);
  	cout << "�����! " << mystr << ".\n";
  	cout << "���� ��� ��������� ����������? ";
  	getline (cin, mystr);
if ( mystr == NTU )
  	cout << "����� ��� ��� ������������ " << mystr << "!\n";
else
	cout << "����� ��� ��� ������������ ��� � �� " << mystr << "!\n";
  	return 0;
}
