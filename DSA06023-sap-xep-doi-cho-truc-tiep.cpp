#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[101];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    

    for (int i = 0; i < n-1; i++){
        for (int j = i; j < n; j++){
            if (a[i]>a[j]){
                swap(a[i],a[j]);
            }   
        }

        cout << "Buoc " << i+1 << ": ";
        for (int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}