// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  22.03.2025

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
    int n;
    cin >> n;
    int t = n;
    vector<pair<int, int>> v;
    if (t & 1)
        t--;
    int i = 2;
    t /= 2;
    if (n & 1)
    {
        n *= 3;
        // cout << n - 2 << ' ' << n - 1 << '\n';
        v.push_back({1, 2});
        i = 5;
        while (t--)
        {
            // cout << i << ' ' << i + 4 << '\n';
            v.push_back({i, i + 4});
            i += 6;
        }
    }
    else
        while (t--)
        {
            // cout << i << ' ' << i + 4 << '\n';
            v.push_back({i, i + 4});
            i += 6;
        }
    cout << v.size() << '\n';
    for (auto it : v)
        cout << it.fi << ' ' << it.sc << '\n';
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