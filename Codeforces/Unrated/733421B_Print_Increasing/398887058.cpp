// Codeforces: https://codeforces.com/contest/733421/B
// Problem: Print Increasing
// Submission: https://codeforces.com/contest/733421/submission/398887058
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T07:13:20.000Z
#include <bits/stdc++.h>
using namespace std;


void printInc(int n){
     if(n==0){
     return;
    }
    printInc(n-1);
    cout << n << endl;
    
}
int main(){
    int n;
    cin >> n;
  printInc(n);
}
