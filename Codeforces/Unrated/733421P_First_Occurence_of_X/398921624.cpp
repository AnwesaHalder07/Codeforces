// Codeforces: https://codeforces.com/contest/733421/P
// Problem: First Occurence of X
// Submission: https://codeforces.com/contest/733421/submission/398921624
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T11:11:48.000Z
#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int x){
    if(n == 0){
        return -1;
    }
    int smallAns = firstOcc(arr, n-1, x);
    if(smallAns != -1){
        return smallAns;
    }
    if(arr[n-1] == x){
        return n;
    }
    return -1;
}


int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    cout << firstOcc(arr, n, x);
    return 0;
}
