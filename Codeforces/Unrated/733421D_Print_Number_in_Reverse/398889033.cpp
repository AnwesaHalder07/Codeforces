// Codeforces: https://codeforces.com/contest/733421/D
// Problem: Print Number in Reverse
// Submission: https://codeforces.com/contest/733421/submission/398889033
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T07:21:36.000Z
#include <bits/stdc++.h>
using namespace std;


  void printReverse(long long n){
    if(n==0){
        return;
    }
    cout << n%10 ;
    printReverse(n/10);
}


int main(){
    long long n;
    cin >> n;
    if(n == 0){
        cout << 0;
    }
    else{
        printReverse(n);
    }
}
