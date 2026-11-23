// Codeforces: https://codeforces.com/contest/733421/N
// Problem: Sum of the Array
// Submission: https://codeforces.com/contest/733421/submission/398920707
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T11:01:32.000Z
#include <bits/stdc++.h>
using namespace std;

long long sumOfarray(long long arr[], int n){

    if(n == 0){
        return 0;
    }
    return arr[n-1] + sumOfarray(arr, n-1);
}

int main(){
    int n;
    cin >> n;

    long long arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << sumOfarray(arr, n);
    return 0;
}
