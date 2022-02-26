#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//long long tong(int a,int b)
//{
//   int c;
//   c=a+b;
//   int d=abs(0-c);
//}


const long long maxn = 1000;
int a[maxn];

int main(){
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        long long res =10e9;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            	if(abs(res)>abs(a[i]+a[j])){
                res = a[i]+a[j];
                
				}
            }
        }
        cout<<res<<endl;
	}
	return 0;
	}
