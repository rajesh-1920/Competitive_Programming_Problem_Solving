// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  24.02.2025

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
    map<int, int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    priority_queue<int> pq;
    for (auto it : mp)
        pq.push(it.sc);
    while (pq.size() > 1)
    {
        int x = pq.top();
        pq.pop();
        if (x == 0)
            break;
        int y = pq.top();
        pq.pop();
        int z = pq.top();
        if (x == y && y == z && x % 2 == 0)
            pq.pop();
        else
            pq.push(x - y);
    }
    if (pq.size())
        cout << pq.top() << '\n';
    else
        cout << 0 << '\n';
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