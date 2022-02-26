 #include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int n,m;
        cin>>n;
        cin>>m;
        long long a[n],b[m];
        for(int i=0;i<n;i++){ 
		    cin>>a[i];
        }
        for(int i=0;i<m;i++){ 
		    cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
         cout<<a[n-1]*b[0]<<endl;}
	return 0;
	}
