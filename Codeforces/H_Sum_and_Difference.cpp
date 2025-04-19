// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  13.04.2025

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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v;
    v.push_back(l);
    while (v.size() < n)
    {
        v.push_back(v.back() + 3);
        v.push_back(v.back() - 2);
    }
    for (int i = 0; i < n; i++)
        if (v[i] > r)
        {
            cout << -1 << '\n';
            return;
        }
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << '\n';
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