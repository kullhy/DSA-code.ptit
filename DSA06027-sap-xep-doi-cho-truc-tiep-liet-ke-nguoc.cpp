#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<vector<int> > ans;

void input () 
{
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++)		cin >> a[i];
}

void interchangeSort () 
{
	for (int i = 0; i < n - 1; i++) 
	{
		for (int j = i + 1; j < n; j++) 
		{
			if (a[i] > a[j])	swap (a[i], a[j]);
		}
		ans.push_back(a);
	}
	
    for (int i = ans.size() - 1; i >= 0; i--) 
	{
        cout << "Buoc " << i + 1 << ":";
        for (auto j : ans[i])   cout << ' ' << j;
        cout << '\n';
    }
	a.clear();
    ans.clear();
}
int main () 
{
    int t;	cin >> t;
    while (t--) 
	{
        input ();
        interchangeSort();
    }
    return 0;
}