// Codeforces: https://codeforces.com/contest/733421/E
// Problem: Factorial
// Submission: https://codeforces.com/contest/733421/submission/398890877
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T07:29:24.000Z
#include <bits/stdc++.h>
using namespace std;

long long fact(long long n){
    if(n == 0 || n == 1){
        return 1;
    }

    return n * fact(n - 1);
}

int main(){
    long long n;
    cin >> n;

    cout << fact(n);

    return 0;
}
