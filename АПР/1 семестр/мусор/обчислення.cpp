#include<iostream>
#include <Windows.h>
#include<math.h>
using namespace std;
//Виконав студент групи КН-1-2 Грищенко Олександр
int main ()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x,a; float b,y,z, pr1, pr2;
	x=3,4;
	a=8,2;
	b=2,5;
	pr1= fabs(x+8);
	y=pr1/((exp(3))+18);
	pr2=sqrt(y+15)*3;
	z=pr2+a/cos(b)+pr2;
	printf(" при x=%d a=%d b=%.3f****y=%.3f***z=%.3f",x,a,b,y,z);

  	
  	return 0;
}
