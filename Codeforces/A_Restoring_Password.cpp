// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  25.03.2025

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n'
#define int long long int
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

const double eps = 1e-1;
const int inf = 9e16 + 7;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < 10; i++)
    {
        string t;
        cin >> t;
        mp[t] = i;
    }
    string t = "";
    for (int i = 0; i < s.size(); i++)
    {
        t.push_back(s[i]);
        if (t.size() == 10)
        {
            cout << mp[t];
            t = "";
        }
    }
}
//-----------------------------------------------------------------------------------------
signed main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}