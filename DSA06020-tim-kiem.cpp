 #include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int n,k,x=0;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++){ 
		    cin>>a[i];
        }
        for(int i=0;i<n;i++){
			 if (a[i]==k) {x=x+1;}}
        if(x>0) cout<<1<<endl;
        else cout<<-1<<endl;}
	return 0;
	}
