// Codeforces: https://codeforces.com/contest/729595/B
// Problem: Search Queries - II
// Submission: https://codeforces.com/contest/729595/submission/397103906
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-02T09:49:03.000Z
#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n, q;
    cin >> n >> q;
    
    vector<long long> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    while(q--){
        int x;
        cin >> x;
    int start = 0, end = n-1;
    int ans = -1;
    
    while(start <= end){
        
        int mid = start + (end - start)/2;
        
        if(arr[mid] == x){
            ans = mid + 1;
            break;
        }else if(arr[mid] < x){
            end = mid - 1;
            
        }else{
           start = mid + 1;
        }
    }
        cout << ans << endl;
    }
    return 0;
}
