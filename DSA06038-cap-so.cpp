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
        int n;
        cin >> n;
        int l[n], maz = 0;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i].first >> a[i].second;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            l[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (a[i].first > a[j].second && l[i] <= l[j])
                    l[i] = l[j] + 1;
            }
            maz = max(maz, l[i]);
        }
        cout << maz << endl;
    }
}
