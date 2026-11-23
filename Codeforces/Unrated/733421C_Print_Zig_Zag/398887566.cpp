// Codeforces: https://codeforces.com/contest/733421/C
// Problem: Print Zig Zag
// Submission: https://codeforces.com/contest/733421/submission/398887566
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T07:15:21.000Z
#include <bits/stdc++.h>
using namespace std;


 void zigzag(int n){
    if(n==0){
        return;
      }
      cout << n << endl;
      if(n == 1){
          return;
      }
      zigzag(n-1);
      cout << n<< endl;
}

int main(){
    int n;
    cin >> n;
    zigzag(n);
}
