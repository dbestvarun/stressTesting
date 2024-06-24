#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define vi vector<int>

bool isbalanced(string s)
{
    int cntf = 0, cntw = 0;
    for (char c : s)
    {
        if (c == 'w')
            cntw++;
        else
            cntf++;
    }
    return cntf == cntw;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    int maxi = 0;

    // O(n^3) solution
    for (int len = n; len > 0; len--)
    {
        for (int start = 0; start + len - 1 < n; start++)
        {
            string sub = s.substr(start, len);
            if (isbalanced(sub))
            {
                cout << len << endl;
                return;
            }
        }
    }

    cout << 0 << endl;
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