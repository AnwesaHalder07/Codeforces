// Codeforces: https://codeforces.com/contest/674948/H
// Problem: Diagonal Sum
// Submission: https://codeforces.com/contest/674948/submission/396968495
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-01T05:17:43.000Z
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    vector<vector<int>> arr(n, vector<int>(n));
    for(int i = 0; i < n; i++){
     for(int j = 0; j < n; j++){
       cin >> arr[i][j];
    }
  }
  int i = 0, j = 0, sum = 0;
  while(i < n && j < n){
  sum += arr[i][j]; 
  i++;
  j++;
 }
 cout << sum;
}

