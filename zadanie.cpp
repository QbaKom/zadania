#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{

    int wynik = 0, p = 0, b = 0;
    cin >> p;
    wynik = 2 * (p + 1);

    for (int a = 2; a * a <= p; a++)
    {
        if (p % a == 0)
        {
            b = p / a;
            wynik = min(wynik, 2 * (a + b));
        }
    }
    cout << wynik << endl;

    // int p = 0, a = 0, b = 0, l = 0;
    // cin >> p;
    // a = (int)floor(sqrt(p));
    // b = (int)floor(p / a);
    // l = 2 * a + 2 * b;
    // cout << l << endl;

    return 0;
}
