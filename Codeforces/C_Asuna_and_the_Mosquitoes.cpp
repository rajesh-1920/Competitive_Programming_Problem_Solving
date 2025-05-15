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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    sort(all(v));
    int ans = v.back();
    v.pop_back();
    priority_queue<int> ev, od, temp;
    for (auto it : v)
        if (it & 1)
            od.push(it);
        else
            ev.push(it);
    while (!ev.empty() && !od.empty())
    {
        temp.push(ev.top() + od.top());
        ev.pop(), od.pop();
    }
    int cnt = 0;
    while (!temp.empty())
    {
        if (ans & 1)
        {
            ans += temp.top();
            if (temp.top() & 1)
            {
                ans--;
                cnt++;
            }
        }
        else
        {
            ans += temp.top();
            if (temp.top() % 2 == 0)
            {
                ans--;
                cnt++;
            }
        }
        temp.pop();
    }
    if (ans & 1)
        while (!ev.empty())
            ans += ev.top(), ev.pop();
    else
        while (!od.empty())
            ans += od.top(), od.pop();
    if (ans % 2 == 0 && cnt > 0)
        ans++;
    if (ans & 1)
        while (!ev.empty())
            ans += ev.top(), ev.pop();
    else
        while (!od.empty())
            ans += od.top(), od.pop();
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