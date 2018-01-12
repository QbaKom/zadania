#include <iostream>

using namespace std;

int main()

{

    int n = 0, m = 0;

    cin >> n >> m;

    long long int wynik;

    bool t[m + 1];

    for (int i = 1; i <= n; i++)
    {
        t[i] = false;
    }

    int a[n + 1];

    a[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int k = 1;
    int T[a[k]] = true;

    for (int p = 1; p <= n; p++)
    {
        while (k < n && !T[a[k]])
        {
            k++;
            T[a[k]] = true;
        }

        wynik = k * p + 1;
        T[a[p]] = false;
    }

    cout << wynik;

    return 0;
}
