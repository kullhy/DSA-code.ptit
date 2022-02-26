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
            if(a[i]==k) 
            x=i;
        }
        cout<<x+1<<endl;
	}
	return 0;
	}
