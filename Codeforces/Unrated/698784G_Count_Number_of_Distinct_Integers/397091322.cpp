// Codeforces: https://codeforces.com/contest/698784/G
// Problem: Count Number of Distinct Integers
// Submission: https://codeforces.com/contest/698784/submission/397091322
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-02T07:30:46.000Z
#include<iostream>
#include<vector>
#include<map>
using namespace std;

map <int, int> mp;

void insertElement(int x){
    mp[x]++;
}
void removeElement(int x){
    mp[x]--;
    
    if(mp[x] == 0){
        mp.erase(x);
    }
}
int main(){
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < k; i++){
        insertElement(arr[i]);
    }
    cout << mp.size() << " ";
    for(int i = k; i < n; i++){
    insertElement(arr[i]);
    removeElement(arr[i-k]);

    cout << mp.size() << " ";
}
    return 0;
}
