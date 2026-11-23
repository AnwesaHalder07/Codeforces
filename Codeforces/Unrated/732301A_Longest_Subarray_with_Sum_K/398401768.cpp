// Codeforces: https://codeforces.com/contest/732301/A
// Problem: Longest Subarray with Sum < K
// Submission: https://codeforces.com/contest/732301/submission/398401768
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-13T07:32:40.000Z
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    long long k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int ans = 0;
    long long currSum = 0;
    int l = 0, r;
    
    for(int r = 0; r < n; r++){
        currSum += arr[r];
    while(l <= r && currSum >= k){
        currSum -= arr[l];
        l++;
    }
    ans = max(ans, r-l+1);
    }
    
    cout << ans << endl;
    return 0;
}
