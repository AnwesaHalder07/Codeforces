// Codeforces: https://codeforces.com/contest/733421/K
// Problem: Print Array
// Submission: https://codeforces.com/contest/733421/submission/398918108
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T10:29:04.000Z
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    if(n == 0){
        return;
    }

    printArray(arr, n-1);
    cout << arr[n-1] << " ";

}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    printArray(arr, n);

    return 0;
}
