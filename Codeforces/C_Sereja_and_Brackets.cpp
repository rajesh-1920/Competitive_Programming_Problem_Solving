#include <bits/stdc++.h>
using namespace std;

int Q, BLOCK_SIZE;
string S;
long long current_answer, cnt[100], answer[100500];
pair<pair<int, int>, int> queries[100500];
inline bool mo_cmp(const pair<pair<int, int>, int> &x, const pair<pair<int, int>, int> &y)
{
    if (x.first.first / BLOCK_SIZE != y.first.first / BLOCK_SIZE)
        return x.first.first / BLOCK_SIZE < y.first.first / BLOCK_SIZE;
    return x.first.second / BLOCK_SIZE < y.first.second / BLOCK_SIZE;
}
inline void add(int x)
{
    current_answer -= cnt[x] * cnt[x] * x;
    cnt[x]++;
    current_answer += cnt[x] * cnt[x] * x;
}
inline void remove(int x)
{
    current_answer -= cnt[x] * cnt[x] * x;
    cnt[x]--;
    current_answer += cnt[x] * cnt[x] * x;
}

signed main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> S >> Q;
    int n = S.size();
    BLOCK_SIZE = static_cast<int>(sqrt(n));
    for (int i = 0; i < Q; i++)
    {
        cin >> queries[i].first.first >> queries[i].first.second;
        queries[i].second = i;
    }
    sort(queries, queries + Q, mo_cmp);
    int mo_left = 0, mo_right = -1;
    for (int i = 0; i < Q; i++)
    {
        int left = queries[i].first.first, right = queries[i].first.second;
        while (mo_right < right)
        {
            mo_right++;
            add(S[mo_right]);
        }
        while (mo_right > right)
        {
            remove(S[mo_right]);
            mo_right--;
        }
        while (mo_left < left)
        {
            remove(S[mo_left]);
            mo_left++;
        }
        while (mo_left > left)
        {
            mo_left--;
            add(S[mo_left]);
        }
        answer[queries[i].second] = current_answer;
    }
    for (int i = 0; i < Q; i++)
        cout << answer[i] << '\n';
    return 0;
}