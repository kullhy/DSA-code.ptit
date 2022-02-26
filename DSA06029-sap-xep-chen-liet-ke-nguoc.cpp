#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;	cin >> n;
	int a[105];
	vector<int> b;
	vector<vector<int>> ans;
	for(int i = 0; i <= n - 1; i++)	
	{
		cin >> a[i];
		b.push_back(a[i]);
		sort(b.begin(), b.end());
		ans.push_back(b);
	}
	for(int i = ans.size() - 1; i >= 0; i--)
	{
		cout << "Buoc " << i << ": ";
		for (auto j : ans[i])   cout << ' ' << j;
	    cout << '\n';
	}
    return 0;
}