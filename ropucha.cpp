#include <iostream>

using namespace std;

{

    int a[n];
    int zlicz[a[n]];
    int wynik ;
    int liscie;
    int n , m;
    cin >> n >> m;

    liscie = n;
    wynik = -1 ; 

    for (int i = 0; i < m; i++)
    {
        if (zlicz[a[i]] == 0)
        {
            liscie--;
        }

        if (liscie == 0)
        {
            wynik = i + 1 ;
            break;
        }

        zlicz[a[i]] = 1;
    }

    cout << wynik ;

    return 0;
}