// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  22.04.2025

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
    if (n == 1)
        cout << -1 << '\n';
    else
    {
        int s = 3;
        vector<int> v;
        v.push_back(3);
        for (int i = 1; i < n; i++)
        {
            if ((s + 2) % 3)
            {
                v.push_back(2);
                s += 2;
            }
            else
            {
                v.push_back(3);
                s += 3;
            }
        }
        for (int i = n - 1; i >= 0; i--)
            cout << v[i];
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