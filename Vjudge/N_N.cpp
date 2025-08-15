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
    int n, k;
    string s;
    cin >> n >> k >> s;
    int ans = 0;
    priority_queue<pair<int, int>> pq;
    int cnt = 0, fl = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            fl++;
            fl = min(fl, 2LL);
            if (cnt)
                pq.push({-cnt, fl});
            cnt = 0;
            ans++;
            if (i)
                if (s[i - 1] == 'W')
                    ans++;
        }
        else
            cnt++;
    }
    fl = min(fl, 1LL);
    if (cnt)
        pq.push({-cnt, fl});
    // dbg(ans);
    while (!pq.empty())
    {
        if (k == 0)
            break;
        fl = pq.top().sc;
        int t = -pq.top().fi;
        pq.pop();
        if (k >= t)
        {
            ans += 2 * t;

            
            k -= t;
            if (fl == 2)
                ans++;
            else if (fl == 0)
                ans--;
        }
        else
        {
            ans += 2 * k;
            k = 0;
            if (fl == 0)
                ans--;
        }
        // dbg(ans);
    }
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