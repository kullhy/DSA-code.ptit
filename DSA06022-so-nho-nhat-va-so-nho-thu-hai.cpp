#include<bits/stdc++.h>
using namespace std;
//ENTERTAINMENT
#define ll long long
#define PI 3.141592653589793
#define FOR(i, l, r)    for(ll i = l; i <= r; i++)
#define FOD(i, r, l)    for(ll i = r; i >= l; i--)
 
const int maxn = 10e6;
int a[maxn], n;
main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cin >> n;
        FOR(i, 0, n - 1)    cin >> a[i];
        sort(a, a + n);
        int dem = 0;
        FOR(i, 0, n - 2)
            if(a[i] != a[i + 1])    dem++;
        if(dem == 0)    cout << "-1\n";
        else            cout << a[0] << ' ' << a[1] << "\n";
    }
}
