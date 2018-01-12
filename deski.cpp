#include <iostream>

using namespace std;

int main () 
{

    int n = 0 , m = 0;
    int a = 0 , b = 0;
    int wynik = 0 ;
    int t[m];

    cin >> n >> m;

    for (int i = 1 ; i <= n ; i ++)
    {
        cin >> a >> b;

         for (int j = 1 ; j <= m ; j ++ )           
         {
            cin >> t[m];
         }

        if (m[j] >= a & m[j] <= b)
        {
            wynik += 1;
        }

    }
    
    cout << wynik ;

    return 0 ; 
}