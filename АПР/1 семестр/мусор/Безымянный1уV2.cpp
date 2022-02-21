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
  	cout << "як тебе звати? ";
  	getline (cin, mystr);
  	cout << "ѕрив≥т! " << mystr << ".\n";
  	cout << "який тв≥й улюблений ун≥верситет? ";
  	getline (cin, mystr);
if ( mystr == NTU )
  	cout << " руто мен≥ теж подобаестьс€ " << mystr << "!\n";
else
	cout << " руто але мен≥ подобаестьс€ Ќ“” а не " << mystr << "!\n";
  	return 0;
}
