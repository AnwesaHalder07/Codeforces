// Codeforces: https://codeforces.com/contest/674948/F
// Problem: String Compression
// Submission: https://codeforces.com/contest/674948/submission/396944955
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-01T03:59:00.000Z
#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
     string s;
     cin >> s;
    
    int n = s.size();
    int i = 0;
    while(i < n){
         int j = i, count = 0;
         while(j < n && s[i] == s[j]){
           count++;
           j++;
        }
      cout << s[i];

      if(count > 1){
       cout << count;
      }
     i = j;
   }
    cout << endl;
  }
}

