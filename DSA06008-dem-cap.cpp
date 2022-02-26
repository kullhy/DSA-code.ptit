#include<bits/stdc++.h>
#define ll long long
#define MAX 1002
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        int a[n], b[m],c[MAX]={0}, max=0;
        for (int i=0; i < n; i++) 
            cin >> a[i];

        for (int i=0; i < m; i++){
            cin >> b[i];
            c[b[i]]++;
            if (max < b[i]) 
                max = b[i];
        }

        for (int i=max; i >= 0; i--) 
            c[i-1] += c[i];   

        int k=c[0]-c[2],check = 0;

        for (int i=0; i < n; i++){
            if (a[i]==0) 
                continue;
            if (a[i]==1) {
                check += (c[0]-c[1]); 
                continue;
            }
            check = check + k + c[a[i]+1];
            if (a[i]==2) 
                check -= (c[3] - c[5]);
            if (a[i] == 3) 
                check += (c[2]-c[3]);
 
        }
        cout << check << endl;
    }
    return 0;
}