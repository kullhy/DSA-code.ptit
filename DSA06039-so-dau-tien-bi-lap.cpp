 #include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int n,x=0;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            int dem=1;
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]) dem++;
            }
            if(dem>1){
                cout<<a[i]<<" "; 
                x++;
                break;
            }
        }
        if(x==0) cout<<"NO";
        cout<<endl;
	}
	return 0;
	}
