// Codeforces: https://codeforces.com/contest/733421/F
// Problem: Sum of first N Natural Numbers
// Submission: https://codeforces.com/contest/733421/submission/398891492
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T07:32:04.000Z
#include <bits/stdc++.h>
using namespace std;

long long sumOfN(long long n){
    if(n == 0){
        return 0;
    }

    return n + sumOfN(n - 1);
}

int main(){
    long long n;
    cin >> n;

    cout << sumOfN(n);

    return 0;
}
