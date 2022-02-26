#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


const long long maxn = 1000;
int a[maxn];

int main(){
	int t;
	cin>>t;
	while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n+k;i++) cin>>a[i];
        sort(a,a+n+k);
        for(int i=0;i< n+k ;i++){
           cout<<a[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
	}
