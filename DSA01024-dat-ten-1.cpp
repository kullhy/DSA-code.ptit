#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;   cin >> n >> k;
    cin.ignore();
    vector <string> a(n);
    for(auto &i : a)    cin >> i; 
    sort(a.begin(), a.end());

    a.resize(distance(a.begin(), unique(a.begin(), a.end())));
    
    string s(k, 1);
    s.resize(a.size(), 0);
    do
    {
        for(int i = 0; i < a.size(); i++)
            if(s[i])    cout << a[i] << ' ';
        cout << '\n';
    } while (prev_permutation(s.begin(), s.end()));
    return 0;
}