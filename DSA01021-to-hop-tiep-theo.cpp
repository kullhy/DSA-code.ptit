#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, s = 0, ok = 0;
        cin >> n >> k;
        int a[k + 1], b[k + 1];
        map<int, int> m;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            m[a[i]]++;
        }
        for (int i = k; i >= 1; i--)
        {
            if (a[i] != n - k + i)
            {
                ok = 1;
                a[i]++;
                for (int j = i + 1; j <= k; j++)
                    a[j] = a[j - 1] + 1;
                break;
            }
        }
        for (int i = 1; i <= k; i++)
        {
            if (m[a[i]] == 0)
                s++;
        }
        if (ok == 0)
            s = k;
        cout << s << endl;
    }
}