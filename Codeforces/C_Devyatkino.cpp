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
int N = 2e10 + 10;
//-----------------------------------------------------------------------------------------
int arr[] = {9,
             99,
             999,
             9999,
             99999,
             999999,
             9999999,
             99999999,
             999999999,
             9999999999,
             99999999999};
//-----------------------------------------------------------------------------------------
int ok(int n)
{
    while (n)
    {
        if (n % 10 == 7)
            return 1;
        n /= 10;
    }
    return 0;
}
void solve(void)
{
    int n;
    cin >> n;
    if (ok(n))
    {
        cout << 0 << '\n';
        return;
    }
    for (int a = 0; a < 10; a++)
        if (ok(n + arr[a]))
        {
            cout << 1 << '\n';
            return;
        }
    for (int b = 0; b < 10; b++)
        for (int a = 0; a < 10; a++)
            if (ok(n + arr[a] + arr[b]))
            {
                cout << 2 << '\n';
                return;
            }
    for (int c = 0; c < 10; c++)
        for (int b = 0; b < 10; b++)
            for (int a = 0; a < 10; a++)
                if (ok(n + arr[a] + arr[b] + arr[c]))
                {
                    cout << 3 << '\n';
                    return;
                }
    for (int d = 0; d < 10; d++)
        for (int c = 0; c < 10; c++)
            for (int b = 0; b < 10; b++)
                for (int a = 0; a < 10; a++)
                    if (ok(n + arr[a] + arr[b] + arr[c] + arr[d]))
                    {
                        cout << 4 << '\n';
                        return;
                    }
    for (int e = 0; e < 10; e++)
        for (int d = 0; d < 10; d++)
            for (int c = 0; c < 10; c++)
                for (int b = 0; b < 10; b++)
                    for (int a = 0; a < 10; a++)
                        if (ok(n + arr[a] + arr[b] + arr[c] + arr[d] + arr[e]))
                        {
                            cout << 5 << '\n';
                            return;
                        }
    for (int f = 0; f < 10; f++)
        for (int e = 0; e < 10; e++)
            for (int d = 0; d < 10; d++)
                for (int c = 0; c < 10; c++)
                    for (int b = 0; b < 10; b++)
                        for (int a = 0; a < 10; a++)
                            if (ok(n + arr[a] + arr[b] + arr[c] + arr[d] + arr[e] + arr[f]))
                            {
                                cout << 6 << '\n';
                                return;
                            }
    cout << 7 << '\n';
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