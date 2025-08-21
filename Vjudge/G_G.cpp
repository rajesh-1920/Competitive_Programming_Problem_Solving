// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  15.08.2025

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
struct st
{
    int l, r, sz, ind, an;
};
bool cmp(st a, st b)
{
    return a.sz < b.sz;
}
void solve(void)
{
    int n;
    cin >> n;
    vector<st> v(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].l >> v[i].r;
        v[i].sz = v[i].l - v[i].r;
        v[i].ind = i;
    }
    sort(all(v), cmp);
    
    // for(auto it:v)
    // cout<<it.l<<' '<<it.r<<" "<<it.sz<<'\n';

    for (int i = 0; i < n; i++)
    {
        ans[v[i].ind].l = v[i].l;
        ans[v[i].ind].r = v[i].r;
        if (i == n - 1)
            ans[v[i].ind].an = v[i].l;
        else
        {
            if (v[i + 1].l > 1 && v[i + 1].l - 1 >= v[i].l)
                ans[v[i].ind].an = v[i + 1].l - 1;
            else
                ans[v[i].ind].an = v[i + 1].l + 1;
        }
        //dbg(v[i].ind);
    }
    for (auto it : ans)
        cout << it.l << ' ' << it.r << ' ' << it.an << '\n';
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