#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[101];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < n-1; i++)
    {
        int min = i+1;
        for (int j = i+1; j < n; j++)
            if (a[min] > a[j])
                min=j;

        if (a[i]>a[min])
            swap(a[i],a[min]);
            
        cout << "Buoc " << i+1 << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        
    }
}