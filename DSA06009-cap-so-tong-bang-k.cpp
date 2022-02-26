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
        for(int i=0;i<n;i++) cin>>a[i];
        long long res =0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            	if(a[i]+a[j]==k){
                res ++;
				}
            }
        }
        cout<<res<<endl;
	}
	return 0;
	}
