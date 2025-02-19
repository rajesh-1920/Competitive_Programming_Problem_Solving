// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  19.02.2025

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
const int MOD = 998244353;
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    vector<int> one(n), three(n), two(n + 1, 0), nxt(n);
    int ans = 0, cnt = 0, no = -1, nth = -1, tw = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        three[i] = nth;
        one[i] = no;
        nxt[i] = tw;
        if (v[i] == 1)
            no = i;
        if (v[i] == 3)
            nth = i;
        if (v[i] == 2)
        {
            cnt++;
            tw = i;
        }
        two[i] = cnt;
    }
    int st = one[0];
    if (v[0] == 1)
        st = 0;
    while (st != -1)
    {
        int nx = nxt[st];
        int tst = -1;
        if (nx != -1)
            tst = three[st];
        while (tst != -1)
        {
            cnt = two[st] - two[tst + 1];
            ans = modadd(modsub(binexpo(2, cnt, MOD), 1, MOD), ans, MOD);
            tst = three[tst];
        }
        st = one[st];
    }
    ans = normal(ans, MOD);
    cout << ans << '\n';
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