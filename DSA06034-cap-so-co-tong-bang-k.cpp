#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;	cin >> n >> k;
	map<int, long long> mp;
	for(int i = 0; i < n; i++)
	{
		int x;	cin >> x;
		mp[x]++;
	}
	long long cnt = 0;
	for(auto it : mp)
	{
		if(it.first >= (k + 1)/2)	break;
		cnt += it.second * mp[k-it.first];
	}
	if(!(k % 2))
	{
		long long tmp = mp[k/2];
		cnt += tmp*(tmp - 1)/2;
	}
	cout << cnt << '\n';
}
int main()
{
	int test;	cin >> test;
	while(test--)
	{
		solve();
	}
	return 0;
}