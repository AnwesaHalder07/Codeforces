// Codeforces: https://codeforces.com/contest/733421/O
// Problem: Check If Array is Sorted
// Submission: https://codeforces.com/contest/733421/submission/398920075
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T10:53:49.000Z
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){

    if(n <= 1){
        return true;
    }

    bool smallAns = isSorted(arr, n-1);

    if(smallAns == false){
        return false;
    }

    return arr[n-1] >= arr[n-2];
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(isSorted(arr, n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
