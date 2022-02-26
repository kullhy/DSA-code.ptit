#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int n, max=10e6;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a +n);
        for(int i=1;i<n;i++){
            int x=a[i]-a[i-1];
            if(x<max) max=x;
        }
        cout<<max<<endl;
	}
	return 0;
	}
