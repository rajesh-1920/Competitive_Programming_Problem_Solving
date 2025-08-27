// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  21.08.2025

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
//------------------------------(solve)----------------------------------------------------
void solve(void)
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    if (k & 1)
    {
        for (auto it : v)
            if (it & 1)
                cout << it + k << ' ';
            else
                cout << it << ' ';
        cout << '\n';
    }
    else
    {
        int t = 3;
        while (true)
        {
            if (k % t)
                break;
            t += 2;
        }
        // dbg(t);
        for (auto it : v)
        {
            if (it % t)
            {
                int x = (it / t + 1) * t;
                while ((x - it) % k)
                    x += t;
                cout << x << ' ';
            }
            else
                cout << it << ' ';
        }
        cout << '\n';
    }
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