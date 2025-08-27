// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  27.08.2025

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n';
#define int long long int
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

const double eps = 1e-1;
const int inf = 9e16 + 7;
const int MOD = 1e9 + 7;
const int N = 1e6 + 10;
//------------------------------(solve)----------------------------------------------------
int ok(int i, int j, int &n, vector<int> &v, map<pair<int, int>, int> &mp)
{
    int x = i, y = j;
    if (x > y)
        swap(x, y);
    int t = v[y];
    if (x)
        t -= v[x - 1];
    if (i + 1 == n && j + 1 == n)
        return t;
    if (mp.find({i, j}) != mp.end())
        return mp[{i, j}];
    int ans = inf;
    if (i + 1 < n)
        ans = min(ans, ok(i + 1, j, n, v, mp) + t);
    if (j + 1 < n)
        ans = min(ans, ok(i, j + 1, n, v, mp) + t);
    return mp[{i, j}] = ans;
}
void solve(void)
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> v(n);
    map<pair<int, int>, int> mp;
    for (int i = 0; i < n; i++)
    {
        v[i] = s[i] - '0';
        if (i)
            v[i] += v[i - 1];
    }
    cout << ok(0, 0, n, v, mp) << '\n';
}
//-----------------------------------------------------------------------------------------
signed main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}