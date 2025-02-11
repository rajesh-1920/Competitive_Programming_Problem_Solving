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
const int MOD = 1e10 + 7;
const int N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
int is_seven(int n)
{
    while (n)
    {
        int x = n - (n / 10) * 10;
        if (x == 7)
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
int ok(int n)
{
    int ans = 7;
    if (is_seven(n))
        ans = min(ans, 0LL);
    for (int i1 = 0; i1 < 9; i1++)
    {
        if (is_seven(n + arr[i1]))
            ans = min(ans, 1LL);
        for (int i2 = 0; i2 < 8; i2++)
        {
            if (is_seven(n + arr[i1] + arr[i2]))
                ans = min(ans, 2LL);
            for (int i3 = 0; i3 < 7; i3++)
            {
                if (is_seven(n + arr[i1] + arr[i2] + arr[i3]))
                    ans = min(ans, 3LL);
                for (int i4 = 0; i4 < 6; i4++)
                {
                    if (is_seven(n + arr[i1] + arr[i2] + arr[i3] + arr[i4]))
                        ans = min(ans, 4LL);
                    for (int i5 = 0; i5 < 5; i5++)
                    {
                        if (is_seven(n + arr[i1] + arr[i2] + arr[i3] + arr[i4] + arr[i5]))
                            ans = min(ans, 5LL);
                        for (int i6 = 0; i6 < 4; i6++)
                        {
                            if (is_seven(n + arr[i1] + arr[i2] + arr[i3] + arr[i4] + arr[i5] + arr[i6]))
                                ans = min(ans, 6LL);
                        }
                    }
                }
            }
        }
    }
    return ans;
}
//-----------------------------------------------------------------------------------------
void solve(void)
{
    int n;
    cin >> n;
    cout << ok(n) << '\n';
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