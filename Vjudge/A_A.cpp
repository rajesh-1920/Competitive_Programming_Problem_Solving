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
    int n, m;
    string s1, s2;
    cin >> n >> m >> s1 >> s2;
    while (s1.size() > 1)
    {
        if (s1.back() != s2.back())
        {
            s2.push_back(s1.back());
            s1.pop_back();
        }
        else
            break;
    }
    while (s2.size() > 1)
    {
        if (s1.back() != s2.back())
        {
            s1.push_back(s2.back());
            s2.pop_back();
        }
        else
            break;
    }
    for (int i = 0; i + 1 < s1.size(); i++)
    {
        if (s1[i] == s1[i + 1])
        {
            cout << "NO\n";
            return;
        }
    }
    for (int i = 0; i + 1 < s2.size(); i++)
    {
        if (s2[i] == s2[i + 1])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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