// Codeforces: https://codeforces.com/contest/729595/C
// Problem: Binary Search (Strings)
// Submission: https://codeforces.com/contest/729595/submission/397105098
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-02T10:02:45.000Z
#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    
    vector<string> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
        string x;
        cin >> x;
       int start = 0, end = n-1;
       bool found = false;
    
    while(start <= end){
        
        int mid = start + (end - start)/2;
        
        if(arr[mid] == x){
            found = true;
            break;
        }else if(arr[mid] < x){
            
             start = mid + 1;
        }else{
          
           end = mid - 1;
        }
    }
    if(found){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
