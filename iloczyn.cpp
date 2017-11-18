#include <iostream>

using namespace std;

int main()
{

    int x = 0, y = 0, z = 0;
    int n, a , e;
    int t[n - 1];
    int m1 , m2 ; 
    int wynik = 0;

    cin >> e >> n;

    sort (a , a + n);
    m1 = a[n-1] * a[n-2] * a[n-3];
    m2 = a[0] * a[1] * a [n - 1];
    wynik = max(m1 , m2);

    return 0;
}