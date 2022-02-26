#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
    vector <int> a,b;
    int n,x;

	int t;
	cin >> t;
	while (t--){
	    cin >> n;
        for (int i=0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        
        for (auto it : a) 
            cout << it << " ";
        cout << endl;
        
        a.clear();
	}
	return 0; 
}