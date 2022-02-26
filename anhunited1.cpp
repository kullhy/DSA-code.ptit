#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int k;
string s;
map<string, int> m;
bool check(string a)
{
    if (a.size() < 2)
        return 0;
    stack<int> st;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '(')
            st.push(1);
        else if (a[i] == ')')
        {
            if (st.empty())
                return 0;
            else
                st.pop();
        }
    }
    if (st.empty())
        return 1;
    return 0;
}
void Try(string a, int pos)
{
    if (check(a))
    {
        if (a.size() > k)
        {
            k = a.size();
            m.clear();
            m[a]++;
        }
        else if (a.size() == k)
            m[a]++;
        return;
    }
    for (int i = pos + 1; i < a.size(); i++)
    {
        if (a[i] == '(' || a[i] == ')')
        {
            string x = a;
            x.erase(x.begin() + i, x.begin() + i + 1);
            Try(x, i - 1);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        k = 0;
        m.clear();
        cin >> s;
        Try(s, -1);
        if (m.empty())
            cout << -1;
        else
        {
            for (auto i : m)
                cout << i.first << " ";
        }
        cout << endl;
    }
}