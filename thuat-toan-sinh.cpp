#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
bool thuannghich(string s)
{
    int n = s.size();
    for (int i = 0; i <= n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++)
        a += '0';
    while (1)
    {
        if (thuannghich(a))
        {
            for (int i = 0; i < a.size(); i++)
                cout << a[i] << " ";
            cout << endl;
        }
        int ok = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == '0')
            {
                ok = 1;
                a[i] = '1';
                for (int j = i + 1; j < n; j++)
                    a[j] = '0';
                break;
            }
        }
        if (ok == 0)
            break;
    }
}
