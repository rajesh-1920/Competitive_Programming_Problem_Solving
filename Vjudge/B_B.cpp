// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  30.05.2025

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
const int inf = 9e9 + 7;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
map<pair<int, int>, int> mp;
int ok(int a1, int a2, int &b1, int &b2)
{
    if (a1 == b1 && a2 == b2)
        return 0;
    if (a2 > b2)
        return inf;
    if (mp.find({a1, a2}) != mp.end())
        return mp[{a1, a2}];

    int ans = inf;
    if (a1 + 3 >= b1)
        ans = min(ans, ok(a1 - 1, a2, b1, b2) + 1);
    ans = min(ans, ok(a1 + 1, a2 + 1, b1, b2) + 1);
    return mp[{a1, a2}] = ans;
}
void solve(void)
{
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int t = ok(a1, a2, b1, b2);
    if (t >= inf)
        t = -1;
    cout << t << '\n';
    mp[{1, 1}] = 1;
    mp.clear();
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