#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[101];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];        
    }
    int k=1;
    
    for (int i = 0; i < n-1; i++)
    {
        int check = 0;
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                check = 1;
            }
        }
        
        if (check)
        {
            cout << "Buoc " << k++ << ": ";
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else 
            break;
    }
    
    
    return 0;
}