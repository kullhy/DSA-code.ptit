 #include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
int n,k,a[100],ok;
void init(){
	FOR(i,1,k+1){
		a[i]=i;
	}
}
void next(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		--i;
	}
	if(i==0) ok=false;
	a[i]++;
	for(int j=i+1;j<=k;j++){
		a[j]=a[i]+j-i;
	}
}
 
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		init();
		ok=true;
		while(ok){
			FOR(i,1,k+1){
				cout<<a[i];
			}
			cout<<' ';
			next();
		}
		cout<<"\n";
	}
}