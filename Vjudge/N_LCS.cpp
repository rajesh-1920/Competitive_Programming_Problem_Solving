// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  10.03.2025

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
const int N = 3e3 + 10;
//-----------------------------------------------------------------------------------------
string dp[N][N];
string ok(int i, int j, string &s1, string &s2)
{
    if (i == 0 || j == 0)
        return "";
    if (dp[i][j].size())
        return dp[i][j];
    string ans = "";
    if (s1[i] == s2[j])
    {
        string t1 = ok(i - 1, j - 1, s1, s2) + s1[i];
        if (ans.size() < t1.size())
            ans = t1;
    }
    else
    {
        string t1 = ok(i - 1, j, s1, s2);
        if (ans.size() < t1.size())
            ans = t1;
        t1 = ok(i, j - 1, s1, s2);
        if (ans.size() < t1.size())
            ans = t1;
    }
    return dp[i][j] = ans;
}
void solve(void)
{
    string s1, s2;
    cin >> s1 >> s2;
    s1 = '*' + s1;
    s2 = '.' + s2;
    cout << ok(s1.size() - 1, s2.size() - 1, s1, s2);
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