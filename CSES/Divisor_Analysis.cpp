// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  13.02.2025

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
inline int normal(int a, int m)
{
    a = a - (a / m) * m;
    if (a < 0)
        a += m;
    return a;
}
inline int modadd(int a, int b, int m)
{
    a = normal(a, m), b = normal(b, m);
    return normal(a + b, m);
}
inline int modsub(int a, int b, int m)
{
    a = normal(a, m), b = normal(b, m);
    return normal(a - b, m);
}
inline int modmul(int a, int b, int m)
{
    a = normal(a, m), b = normal(b, m);
    return normal(a * b, m);
}
inline int binexpo(int a, int b, int m)
{
    int ans = 1;
    a = normal(a, m);
    while (b)
    {
        if (b & 1)
            ans = modmul(ans, a, m);
        a = modmul(a, a, m);
        b >>= 1;
    }
    return normal(ans, m);
}
inline int moddiv(int a, int b, int m)
{
    return normal(modmul(a, binexpo(b, m - 2, m), m), m);
}
//-----------------------------------------------------------------------------------------
void solve(void)
{
    int n, sod = 1, deno = 1, pod = 1, nod = 1;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        sod = modmul(sod, (modsub(binexpo(x, y + 1, MOD), 1, MOD)), MOD);
        deno = modmul(deno, modsub(x, 1, MOD), MOD);
        nod = modmul(nod, modadd(y, 1, MOD), MOD);
        pod = modmul(pod, binexpo(x, moddiv(modmul(y, y + 1, MOD), 2, MOD), MOD), MOD);
    }
    sod = moddiv(sod, deno, MOD);
    cout << nod << ' ' << sod << ' ' << pod;
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