// Codeforces: https://codeforces.com/contest/733421/A
// Problem: Print Decreasing
// Submission: https://codeforces.com/contest/733421/submission/398886716
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T07:11:57.000Z
#include <bits/stdc++.h>
using namespace std;


void printDec(int n){
     if(n==0){
     return;
    }
    cout << n << endl;
    printDec(n-1);
}
int main(){
    int n;
    cin >> n;
  printDec(n);
}
