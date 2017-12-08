#include <iostream>
using namespace std;

int nwd(int a, int b)
{
    if (a % b == 0)
        return b;
    return nwd(a, a % b);
}

int uciekaj(int n, int d)
{
    int liczba = 0;
    if (d = 1)
        return n;
    liczba = nwd(n, d);
    return (n * d) / liczba;
}

int main()
{
    int n=0, d=0, z=0;
    int i = 0;

    //cout << "Podaj liczbe: ";
    cin >> z;
    int t[z - 1];

    while (i < z)
    {

        //cout << "Podaj n: ";
        cin >> n;
        //cout << "Podaj d: ";
        cin >> d;
        int wynik = uciekaj(n, d);
        //cout << "Wynik: " << wynik << endl;
        t[i] = wynik;
        i++;
    }

    for (int j = 0; j < z; j++)
    {
        cout << t[j] << endl;
    }

    return 0;
}