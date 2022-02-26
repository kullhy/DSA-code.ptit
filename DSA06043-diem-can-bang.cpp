 #include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,check=0;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
        int total_sum = 0;
        int left_sum = 0;
        for (int i = 0; i < n; ++i)
        total_sum += a[i];             
        for (int i = 0; i < n; ++i){
             total_sum -= a[i];
             int right_sum = total_sum;
              if (left_sum == right_sum) {cout<<i+1<<endl ; check=1; break;}
              left_sum += a[i];
    }

	if(check==0) cout<<"-1"<<endl;
	}
	return 0;
	}
