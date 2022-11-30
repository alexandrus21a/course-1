#include <iostream>
//Ввести 11 дійсних чисел та обчислити кількість елементів послідовності,
//значення яких є більше за значення першого елемента
using namespace std;
int main()
{
    setlocale(LC_ALL, " ");
    int i=0, x, x1, p = 0;
    cout << "Ввести " << i << " число: "; // вивести запрошення,
    cin >> x1;
    for (int j = 2; j < 12; j++)
    {
        cout << "Ввести " << j << " число: ";
        cin >> x;
        if (x > x1)
        {
            p++;
        }
    }
    cout << "Кількість елементів: " << p << endl;
    system("pause>>void");
return 0;
}
