#include <iostream>
#include <math.h>
//Макаренко Олександра кн-1-2 лаб 4
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ukrainian");
    float x, y, t, z, k;
    cout << "введіть значення k : ";
    cin >> k;
    if (0 < k <= 10)
        z = fabs(sin(k));
    else
        k = 10;
    t = (z / 1 + exp(k));
    x = ((3 * z) + tan(t * z) / (t + 1));
    y = pow(x, k) + log(pow(cos(x), 2) + sqrt(1 + pow(cos(x), 3)));
    cout << "при k = " << k << " z = " << z << " t = " << t << " x = " << x << " y = " << y;
    return 0;
}
