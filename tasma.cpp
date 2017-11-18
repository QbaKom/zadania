#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int wynik, lewa = 0, prawa = 0, roznica;
    int n, s = 0;
    //cout << "Podaj liczbe: ";
    cin >> n;
    int t[n - 1];
    int l[n / 2];

    int polowa = n / 2;
    wynik = 2001;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        s += t[i];
        if (n % 2 > 0)
        {
            if (i <= polowa)
                lewa += t[i];
        }
        else
        {
            if (i < polowa)
                lewa += t[i];
        }
    }
    
        prawa = s - lewa;
    roznica = abs(lewa - prawa);
    wynik = min(wynik, roznica);
    //  cout << "Suma: " << s << endl;
    //  cout << "Prawa: " << prawa << endl;
    //  cout << "Lewa: " << lewa << endl;
    //  cout << "Roznica: " << roznica << endl;
    cout << wynik << endl;

    return 0;
}