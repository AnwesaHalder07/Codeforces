// Codeforces: https://codeforces.com/contest/730116/B
// Problem: Ship Packages Within D Days
// Submission: https://codeforces.com/contest/730116/submission/397318326
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-04T10:14:15.000Z
#include <bits/stdc++.h>
using namespace std;

bool canShip(vector<long long>& weights, int d, long long capacity) {
    int dayCount = 1;
    long long load = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (load + weights[i] <= capacity) {
            load += weights[i];
        } else {
            dayCount++;
            load = weights[i];
        }

        if (dayCount > d) return false;
    }

    return true;
}

int main() {
    int n, d;
    cin >> n >> d;

    vector<long long> weights(n);

    long long start = 0, end = 0;

    for (int i = 0; i < n; i++) {
        cin >> weights[i];
        start = max(start, weights[i]);
        end += weights[i];
    }

    long long ans = end;

    while (start <= end) {
        long long mid = start + (end - start) / 2;

        if (canShip(weights, d, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
