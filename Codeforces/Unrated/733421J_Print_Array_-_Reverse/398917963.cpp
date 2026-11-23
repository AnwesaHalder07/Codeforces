// Codeforces: https://codeforces.com/contest/733421/J
// Problem: Print Array - Reverse
// Submission: https://codeforces.com/contest/733421/submission/398917963
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T10:27:01.000Z
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){

    if(n == 0){
        return;
    }

    cout << arr[n-1] << " ";

    reverseArray(arr, n-1);
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    reverseArray(arr, n);

    return 0;
}
