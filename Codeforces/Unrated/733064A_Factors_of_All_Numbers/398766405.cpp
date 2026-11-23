// Codeforces: https://codeforces.com/contest/733064/A
// Problem: Factors of All Numbers
// Submission: https://codeforces.com/contest/733064/submission/398766405
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-16T10:46:17.000Z
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> factors(n + 1);
     for(int i = 1; i <= n; i++) {

        for(int j = i; j <= n; j += i) {
            factors[j].push_back(i);
        }
    }

    for(int i = 1; i <= n; i++){
        for(int x : factors[i]){
            cout << x << " ";
        }
    cout << endl;
    }
    return 0;
}
