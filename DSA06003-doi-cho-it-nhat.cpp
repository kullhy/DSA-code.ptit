#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
        int n, c=0;
        cin >> n;
        int a[n], b[n];
        for (int i=0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);

        for (int i=0; i < n; i++) 
            if (a[i] != b[i]){
                for (int j=i+1; j < n; j++)
                if (a[j] == b[i]){
                    swap(a[i],a[j]);
                    c++;
                    break;
                }
                
            }
        cout << c << endl;
	}
	return 0;
}