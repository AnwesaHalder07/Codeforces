// Codeforces: https://codeforces.com/contest/733421/I
// Problem: Nth Fibonacci
// Submission: https://codeforces.com/contest/733421/submission/398894167
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T07:42:53.000Z
#include <bits/stdc++.h>
using namespace std;

long long fib(long long n){

    if(n == 1) return 0;
    if(n == 2) return 1;

    return fib(n-1) + fib(n-2);
}

int main(){
    long long n;
    cin >> n;

    cout << fib(n);

    return 0;
}
