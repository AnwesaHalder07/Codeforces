// Codeforces: https://codeforces.com/contest/733421/G
// Problem: Power
// Submission: https://codeforces.com/contest/733421/submission/398895259
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T07:47:25.000Z
#include <bits/stdc++.h>
using namespace std;

long long pow(long long x, long long n){
    if(n==0){
        return 1;
    }
    return x * pow(x, n-1);
}
int main(){
    long long n, x;
    cin >> x >> n;

    cout << pow(x, n);

    return 0;
}
