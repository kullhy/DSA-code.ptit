 #include<bits/stdc++.h>
 #include <map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
    int n, max=0,x ; cin >> n;
	long long a[n];
	map<int, int>mp;
    for (int i = 0; i< n; i++){
         cin>>a[i];
         mp[a[i]]++;
	     }
	for (int i = 0; i< n; i++){
		if(mp[a[i]]>max){ 
		     max=mp[a[i]];
			 x=a[i];
	}}
	     if(max<=(n/2)) cout<<"NO"<<endl;
		 else cout<<x<<endl;
	}
	return 0;
	}
