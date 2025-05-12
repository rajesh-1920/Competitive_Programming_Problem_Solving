// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  12.05.2025

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
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n), ans;
    for (auto &it : v)
    {
        cin >> it;
        if (it)
            cnt++;
    }
    if (cnt & 1)
        cnt--;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i])
        {
            if (cnt)
            {
                ans.push_back(1);
                if (ans.size() & 1)
                    s++;
                else
                    s--;
            }
        }
        else
            ans.push_back(0);
    }
    while (s)
    {
        int t = 0;
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            if (ans[i])
            {
                if (s - 2 * t - 1 == 0)
                {
                    ans.erase(ans.begin() + i);
                    s = 0;
                    break;
                }

                if (i & 1)
                    t--;
                else
                    t++;
            }
            else
            {
                if (s - 2 * t == 0)
                {
                    ans.erase(ans.begin() + i);
                    s = 0;
                    break;
                }
            }
        }
    }

    cout << ans.size() << '\n';
    for (auto it : ans)
        cout << it << ' ';
    cout << '\n';
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