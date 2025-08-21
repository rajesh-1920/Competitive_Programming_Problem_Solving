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

int sum(int n)
{
    if (n < 0)
        return 0;
    int res = 0, p = 1;
    while (p <= n)
    {
        res += (n / (10 * p)) * 45 * p;
        int hate = n % (10 * p);
        int carry = hate / p;
        res += p * (carry * (carry - 1) / 2);
        res += carry * (hate % p + 1);
        p *= 10;
    }
    return res;
}

int sum_range(int a, int b)
{
    if (a > b)
        return 0;
    return sum(b) - sum(a - 1);
}
void solve(void)
{
    int n;
    cin >> n;
    int ans = 0, d = 1;
    while (n > 0)
    {
        int left = pow(10, d - 1);
        int total = 9 * left * d;
        if (n >= total)
        {
            ans += sum_range(left, left * 10 - 1);
            n -= total;
        }
        else
        {
            int m = n / d;
            if (m > 0)
            {
                ans += sum_range(left, left + m - 1);
                n -= m * d;
            }
            if (n > 0)
            {
                int tmp = left + m;
                string s = to_string(tmp);
                for (int i = 0; i < n; i++)
                    ans += s[i] - '0';
                n = 0;
            }
            break;
        }
        d++;
    }
    cout << ans << '\n';
}
//-----------------------------------------------------------------------------------------
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        solve();
    }
    return 0;
}
