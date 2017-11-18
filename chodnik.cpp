#include <iostream>

using namespace std;

int main()
{

    int wynik;
    int n;
    int s;
    int suma ;

        cin>> n ;

        suma = (n * (n + 1))/2 ;

        s = (n * (n + 1))/2 ;

    for (int i = 1; i <= n-1  ; i++)
    {
        int a ;
        cin >> a;
        s -= a ;

    }

    wynik = (suma + s) - suma;

    cout << wynik ;

    return 0;
}

/*
#include <iostream>

using namespace std;

int main()
{

    int wynik;
    int n;
    int s = 0;
    int suma ;
    
        cin>> n ;
            int t[n-1];

        suma = (n * (n + 1))/2 ;


    for (int i = 1; i <= n-1  ; i++)
    {
       cin >> t[i];
       s += t[i];

    }

    wynik = suma - s;

    cout << wynik ;

    return 0;
}
/*/