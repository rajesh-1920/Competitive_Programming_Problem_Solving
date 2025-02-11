// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  05.02.2025

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
const int N = 1e6 + 10;
//-----------------------------------------------------------------------------------------
int binexpo(int a, int b, int mod)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans % mod * a % mod) % mod;
        a = (a % mod * a % mod) % mod;
        b >>= 1;
    }
    return ans % mod;
}
vector<int> prime;
vector<bool> is(N);
void sieve()
{
    prime.push_back(2);
    for (int i = 3; i < N; i++)
    {
        if (!is[i])
        {
            prime.push_back(i);
            for (int j = i * i; j < N; j += 2 * i)
                is[j] = true;
        }
    }
}
void solve(void)
{
    int n, nom = 1, denom = 1;
    cin >> n;
    for (auto it : prime)
    {
        int cnt = 0;
        if (it > n)
            break;
        while (n % it == 0)
        {
            n /= it;
            cnt++;
        }
        nom = (nom % MOD * (binexpo(it, cnt + 1, MOD) - 1) % MOD) % MOD;
        denom = (denom % MOD * (it - 1) % MOD) % MOD;
    }
    int ans = (nom % MOD * (binexpo(denom, MOD - 2, MOD))) % MOD;
    dbg(nom);
    dbg(denom);
    cout << ans;
}
//-----------------------------------------------------------------------------------------
signed main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
    sieve();
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}