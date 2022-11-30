//B: Ввести послідовність дійсних чисел (а1, а2, а3, ...) та обчислити max(|a1 – a2|, 
//|a2 – a3|, …)
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, a, max, u=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (max < a)
            u += fabs(max-a);
            max=0;
    }
    cout << "|Max|:\t"<<u<<'\n';
    return 0;
}