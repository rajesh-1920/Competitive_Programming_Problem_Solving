#include <bits/stdc++.h>
using namespace std;

// Function to calculate the maximum number of coins
long long maxCoins(vector<int>& a) {
    int n = a.size();
    long long totalCoins = 0;
    int left = 0, right = n - 1;

    // Use a priority queue to store elements with their indices
    priority_queue<pair<int, int>> pq; // {absolute value, index}

    // Push all elements into the priority queue
    for (int i = 0; i < n; ++i) {
        pq.push({abs(a[i]), i});
    }

    // Simulate the process
    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();
        int val = top.first;
        int idx = top.second;

        // Check if the element is within the current bounds
        if (idx < left || idx > right) {
            continue; // Skip if the element is already deleted
        }

        // Add the absolute value to the total coins
        totalCoins += val;

        // Update the bounds
        if (a[idx] < 0) {
            right = idx - 1; // Delete the suffix
        } else {
            left = idx + 1; // Delete the prefix
        }
    }

    return totalCoins;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << maxCoins(a) << '\n';
    }

    return 0;
}