#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int tmp = 0;
        while(k<=n)
        {
            long long max = a[tmp]; 
            for(long long i = tmp+1; i < k; i++)
            {
                if(max < a[i])
                {
                    max = a[i];
                }
            }
            cout << max << " ";
            k++;
            tmp++;
        }
        cout << endl;
    }
    return 0;
}