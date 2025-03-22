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
    int x, y;
    cin >> x >> y;
    int t1 = x, t2 = y;
    if (x == y)
    {
        cout << -1 << '\n';
        return;
    }
    if (x + y == (x ^ y))
    {
        cout << 0 << '\n';
        return;
    }
    vector<int> v, q;
    while (x)
    {
        if (x & 1)
            v.push_back(1);
        else
            v.push_back(0);
        x /= 2;
    }
    while (y)
    {
        if (y & 1)
            q.push_back(1);
        else
            q.push_back(0);
        y /= 2;
    }
    while (q.size() < v.size())
        q.push_back(0);
    while (q.size() > v.size())
        v.push_back(0);
    int k = 0;
    x = 1;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<' '<<q[i]<<'\n';
        if (v[i] != q[i])
            k += x;
        x *= 2;
    }
    // int k = (x & ~y) | (~x & y);
    cout << k / 2 << "\n";
    // cout << (t1 + t2 + 2 * k) << ' ' << ((t1 + k) ^ (t2 + k)) << '\n';
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