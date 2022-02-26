#include <bits/stdc++.h>
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
void bubbleSort () 
{
	bool check;
	for (int i = 0; i < n - 1; i++) 
	{
		check = false;
		for (int j = 0; j < n - i - 1; j++) 
			if (a[j] > a[j + 1]) 
			{
				swap (a[j + 1], a[j]);
				check = true;
			}
		if (check) 
		{
			ans.push_back(a);
		}
	}
	for (int i = ans.size() - 1; i >= 0; i--) 
	{
        cout << "Buoc " << i + 1 << ':';
        for (auto j : ans[i])   cout << " " << j;
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
		bubbleSort ();
	}
    return 0;
}