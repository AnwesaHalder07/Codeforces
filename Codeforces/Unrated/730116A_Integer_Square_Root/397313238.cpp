// Codeforces: https://codeforces.com/contest/730116/A
// Problem: Integer Square Root
// Submission: https://codeforces.com/contest/730116/submission/397313238
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-04T09:20:14.000Z
#include<iostream>
#include<vector>
using namespace std;

  int main(){
      
      long long x;
      cin >> x;
      long long start = 0, end = x;
      long long ans = 0;
      while(start <= end){
          long long mid = start + (end - start)/2;
          
          if(mid == 0 || mid <= x/mid){
              ans = mid;
              start = mid + 1;
          }else{
              end = mid - 1;
          }
    }
    cout << ans << endl;
    return 0;
}
