// Codeforces: https://codeforces.com/contest/698784/A
// Problem: Max Subarray Sum of Size K
// Submission: https://codeforces.com/contest/698784/submission/397092781
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-02T07:49:00.000Z
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    int n, k;
    cin >> n >> k;
    
    vector<long long> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long sum = 0;
    
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
    long long maxSum = sum;
    
    for(int i = k; i < n; i++){
        sum += arr[i];
        sum -= arr[i -k];
        
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;
}
