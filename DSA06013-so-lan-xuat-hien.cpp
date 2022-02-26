#include<bits/stdc++.h>
using namespace std;
const int maxn = 10e6;
int a[maxn], n, k;
main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	long long dem=0;
        cin >> n >> k;
        for(long long i = 0; i < n ; i++) {  
		    long long x;
			cin >> x;
			if(x==k) dem++;
            
    }
    if(dem==0) cout<<"-1";
    else cout<<dem;
}}
