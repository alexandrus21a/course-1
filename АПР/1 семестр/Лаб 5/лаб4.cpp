#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;//Виставляємо робоче иісце для роботи команд(cin,cout)

//Виконав студент КН-1-2 Грищенко Олександр

int main ()
{
	SetConsoleCP(1251);//Встановлюємо каодуваня 1251 для відображення кирилиці
    SetConsoleOutputCP(1251);//Встановлюємо каодуваня 1251 для відображення кирилиці
    double chislo,chislo1;//Створюємо перемінні величини оператора
    cout<<"Введіть два числа ";//Просто вводимо текст через оператора cout
	std::cin>>chislo;//Вводимо данні в перемінну
	std::cin>>chislo1;//Вводимо данні в перемінну
    if (chislo>chislo1){//Створюємо умову для подальшої дії
    cout<<chislo<<" більше за "<<chislo1<<endl;//Просто вводимо текст через оператора cout
    } else if (chislo<chislo1) //Створюємо умову для подальшої дії
	{
    cout<<chislo1<<" Більше за "<<chislo<<endl;//Просто вводимо текст через оператора cout	
	}	
	return 0;
  	
}
