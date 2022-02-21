#include <Windows.h>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//Виконав студент КН-1-2 Грищенко Олександр
int main ()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
  	string mystr , hz1, hz2, cpu, cpu1, cpu2, ram, type, type1, type2, ram1, hz, ram2;
	cout << "Як тебе звати? ";
  	getline (cin, mystr);
  	cout << "Привіт! " << mystr << ".\n";
  	cout << "Введи процесор першого комп'ютера ";
  	getline (cin, cpu);
 	cout << "Введи частоту процесора першого комп'ютера ";
  	getline (cin, hz);
  	cout << "Введи кількість озу першого комп'ютера ";
  	getline (cin, ram);
  	cout << "Введи тип першого комп'ютера ";
  	getline (cin, type);
  	
  	cout << "Введи процесор другого комп'ютера ";
  	getline (cin, cpu1);
 	cout << "Введи частоту процесора другого комп'ютера ";
  	getline (cin, hz1);
  	cout << "Введи кількість озу другого комп'ютера ";
  	getline (cin, ram1);
  	cout << "Введи тип другого комп'ютера ";
  	getline (cin, type1);
  	
  	cout << "Введи процесор третьго комп'ютера ";
  	getline (cin, cpu2);
 	cout << "Введи частоту процесора третього комп'ютера ";
  	getline (cin, hz2);
  	cout << "Введи кількість озу третього комп'ютера ";
  	getline (cin, ram2);
  	cout << "Введи тип третього комп'ютера ";
  	getline (cin, type2);
  	
  	cout << setw(20) << "|Характеристика ПЕОМ|"<<endl;
	cout << left << setw(11) << "Процесор" <<"|"<< setw(11) << "Частота" <<"|" <<  setw(11) << "ОЗУ" <<"|" << setw(3) << "Тип" <<"|"<<endl;
	cout << left << setw(11) << cpu <<"|"<< setw(11) << hz <<"|" <<  setw(11) << ram <<"|" << setw(3) << type <<"|"<<endl;
	cout << left << setw(11) << cpu1 <<"|"<< setw(11) << hz1 <<"|" <<  setw(11) << ram1 <<"|" << setw(3) << type1 <<"|"<<endl;
	cout << left << setw(11) << cpu2 <<"|"<< setw(11) << hz2 <<"|" <<  setw(11) << ram2 <<"|" << setw(3) << type2 <<"|"<<endl;
	cout << left << "Тип: C - CISC-Процесор,R - RISC-Процесор" <<endl;
}
