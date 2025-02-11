// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  11.02.2025

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
vector<int> nod(N, 1), sod(N, 1);
void sieve()
{
    for (int i = 2; i < N; i++)
        for (int j = i; j < N; j += i)
        {
            nod[j]++;
            sod[j] += i;
        }
}
void solve(void)
{
    int n;
    cin >> n;
    cout << nod[n] << '\n';
}
//-----------------------------------------------------------------------------------------
signed main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    sieve();
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}