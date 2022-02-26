 #include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int n,res=0,x=0;
        cin>>n;
        long long a[n],b[n];
        for(int i=0;i<n;i++){ 
		    cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
             res+=(a[i+1]-a[i]-1);
			 if (a[i+1]==a[i]) {x=x+1;}}
        cout<<res+x<<endl;}
//        int x=a[n-1]-a[0]+1;
//        cout<<x-n<<endl;}
	return 0;
	}
