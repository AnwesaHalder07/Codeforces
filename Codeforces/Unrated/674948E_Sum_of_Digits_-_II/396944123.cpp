// Codeforces: https://codeforces.com/contest/674948/E
// Problem: Sum of Digits - II
// Submission: https://codeforces.com/contest/674948/submission/396944123
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-01T03:39:38.000Z
#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int n = s.size(), sum = 0;
    for(int i = 0; i < n; i++){
    sum += s[i] - '0';
    }
   cout << sum << endl;

}
