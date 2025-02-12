// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  12.02.2025

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
const int MOD = 1e10 + 7;
const int N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
int is_seven(int n)
{
    while (n)
    {
        if (n % 10 == 7)
            return 1;
        n /= 10;
    }
    return 0;
}
int arr[] = {9,
             99,
             999,
             9999,
             99999,
             999999,
             9999999,
             99999999,
             999999999,
             9999999999};
map<int, int> mp;
int x;
int ok(int n, vector<int> cnt)
{
    if (mp.find(n) != mp.end())
        return mp[n];
    if (is_seven(n))
        return 0;
    int ans = 7;
    for (int i = 0; i < 10; i++)
        if (n + arr[i] <= x && cnt[i] <= 6)
        {
            cnt[i]++;
            ans = min(ans, ok(n + arr[i], cnt) + 1);
        }
    return mp[n] = ans;
}
//-----------------------------------------------------------------------------------------
void solve(void)
{
    int n;
    cin >> n;
    int t = n;
    x = 10;
    while (t)
    {
        t /= 10;
        x *= 10;
    }
    vector<int> cnt(10, 0);
    cout << ok(n, cnt) << '\n';
    mp.clear();
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