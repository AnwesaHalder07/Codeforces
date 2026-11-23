// Codeforces: https://codeforces.com/contest/674948/I
// Problem: Rotate Image
// Submission: https://codeforces.com/contest/674948/submission/396957479
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-01T05:06:17.000Z
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
   for(int j = 0; j < n; j++){
     for(int i = n-1; i >= 0; i--){
       cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  
}

