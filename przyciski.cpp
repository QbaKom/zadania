#include <iostream>

using namespace std;

int main()
{

    int n , m ;
    int p[n];
    int maksimum , minimum ;
    int licznik;

    for (int i = 0 ; i < n ; i++)
    {
        if (p[i] == n + 1)
        {
            minimum = maksimum ;
        }

        else 
        {
            licznik[p[i]] = max(minimum , licznik[p[i]]) + 1;
            maksimum = max (maksimum , licznik[p[i]];) 
        }
    }

    for ( int i = 1 ; i <= n ; i++ )
    {
        licznik[i] = max(minimum , licznik[i]);
    }





    return 0 ;
}