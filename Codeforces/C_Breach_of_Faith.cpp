// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  10.03.2025

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
    priority_queue<int> pq;
    set<int> st;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
        st.insert(x);
    }
    vector<int> v(2 * n + 1);
    for (int i = 1; i < 2 * n + 1; i += 2)
    {
        v[i] = pq.top();
        pq.pop();
    }
    for (int i = 2; i < 2 * n + 1; i += 2)
    {
        v[i] = pq.top();
        pq.pop();
    }
    int s = 0;
    for (int i = 1; i < 2 * n + 1; i++)
        if (i & 1)
            s += v[i];
        else
            s -= v[i];
    v[0] = s;
    if (v[0] == v[1])
        for (int i = 2; i + 1 < 2 * n + 1; i += 2)
            if (v[i] != v[1] && v[i + 1] != v[0] && v[i - 1] != v[0])
            {
                swap(v[i], v[0]);
                break;
            }
    if (v[0] == v[1] && v[2 * n] != v[0])
        swap(v[0], v[2 * n]);

    for (auto it : v)
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