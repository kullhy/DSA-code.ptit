#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k,a[10005],b[10005],c[10005];
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			b[i]=(k-a[i]);
			c[i]=b[i];
		}
		sort(c,c+n);
	
		int x=0;
		while(x<=n){
			for(int i=0;i<n;i++){
				if(c[x]==b[i]){
					cout<<a[i]<<" ";
					b[i]=-1;
					break;
				}
			}
			x++;
		}
		cout<<endl;
	}
}