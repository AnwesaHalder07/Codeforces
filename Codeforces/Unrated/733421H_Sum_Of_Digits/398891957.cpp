// Codeforces: https://codeforces.com/contest/733421/H
// Problem: Sum Of Digits
// Submission: https://codeforces.com/contest/733421/submission/398891957
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T07:33:55.000Z
#include <bits/stdc++.h>
using namespace std;

long long sumOfdigits(long long n){
    if(n == 0){
        return 0;
    }

    return (n%10) + sumOfdigits(n/10);
}

int main(){
    long long n;
    cin >> n;

    cout << sumOfdigits(n);

    return 0;
}
