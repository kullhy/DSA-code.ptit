 #include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int n,x,y;
        cin>>n;
        long long a[n],b[n];
        for(int i=0;i<n;i++){ 
		    cin>>a[i];
            b[i]=a[i];}
        sort(b,b+n);
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                x=i+1;
                break;
            }
        }
         for(int i=n-1;i>0;i--){
             if(a[i]!=b[i]){
                y=i+1;
                break;
            }
         }
         cout<<x<<<<y<<endl;}
	return 0;
	}
