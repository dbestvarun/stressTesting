#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define vi vector<ll>

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi pre(n + 1);

    for (int i = 0; i < n; i++)
    {
        int bal;
        if (s[i] == 'w')
        {
            bal = 1;
        }
        else
        {
            bal = -1;
        }
        pre[i + 1] = pre[i] + bal;
    }
    ll ans = 0;
    map<int, ll> mp;
    for (int i = 0; i < n + 1; i++)
    {
        if (mp.find(pre[i]) != mp.end())
        {
            ans = max(ans, i - mp[pre[i]]);
        }
        else
        {
            mp[pre[i]] = i;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}