#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;//??????????? ?????? ????? ??? ?????? ??????(cin,cout)

//??????? ??????? ??-1-2 ???????? ?????????

int main ()
{
	SetConsoleCP(1251);//???????????? ????????? 1251 ??? ???????????? ????????
    SetConsoleOutputCP(1251);//???????????? ????????? 1251 ??? ???????????? ????????
    double inp;//????????? ????????? ???????? ?????????
    cout<<"? ????? ???? ??????? ????????? ?Ҳ? ";//?????? ??????? ????? ????? ????????? cout
	std::cin>>inp;//??????? ????? ? ?????????
	
    if (inp==2007){//????????? ????? ??? ????????? 䳿
    cout<<"?????????"<<endl;//?????? ??????? ????? ????? ????????? cout
    } else {
    cout<<"?? ?????. ????????? ???????? ? 2007 ????"<<endl;//?????? ??????? ????? ????? ????????? cout	
	}	
	return 0;
  	
}
