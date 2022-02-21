#include <Windows.h>
#include <iostream>
#include <string>
#include <list>
#include <math.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int y,a=5.5,b=0.36;
    double x = 1;
    while ( x < 8 )
    {
        x=x+0.5;
        y=log(fabs(x-b))/a+sqrt(pow(x,3));
	    std::cout<<"x="<<x<<" "<<"y="<<y<<endl;
    }
  	
}