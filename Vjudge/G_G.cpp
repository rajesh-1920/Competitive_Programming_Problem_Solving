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
    int n, m, n1, m1;
    char ch;
    cin >> n >> ch >> m >> n1 >> ch >> m1;
    if (n < n1)
    {
        n1--;
        int t = (n1 - n) * 60 + 60 + m1 - m;
        // dbg(t);
        t /= 2;
        // dbg(t);
        int x = t / 60;
        n += x;
        // dbg(x);
        m += (t % 60);
        if (m >= 60)
        {
            n++;
            m -= 60;
        }
        if (n < 10)
            cout << 0 << n << ch;
        else
            cout << n << ch;
        if (m < 10)
            cout << 0 << m << '\n';
        else
            cout << m << '\n';
    }
    else
    {
        int t = m1 - m;
        t /= 2;
        m += t;
        if (n < 10)
            cout << 0 << n << ch;
        else
            cout << n << ch;
        if (m < 10)
            cout << 0 << m << '\n';
        else
            cout << m << '\n';
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