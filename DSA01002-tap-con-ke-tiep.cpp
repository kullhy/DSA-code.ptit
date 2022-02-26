 #include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
int main(){

	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[k+1];
		FOR(i,1,k+1) cin>>a[i];
		int i=k;
		while(i>=1 && a[i]==n-k+i){
			--i;
		}
		if(i==0){
			FOR(i,1,k+1){
				cout<<i<<" ";
			}
		}
		else{
			++a[i];
			for(int j=i+1;j<=k;j++){
				a[j]=a[j-1]+1;
			}
			FOR(i,1,k+1){
				cout<<a[i]<<" ";
			}
		}
		cout<<"\n";
	}
}