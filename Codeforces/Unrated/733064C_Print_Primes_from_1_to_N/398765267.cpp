// Codeforces: https://codeforces.com/contest/733064/C
// Problem: Print Primes from 1 to N
// Submission: https://codeforces.com/contest/733064/submission/398765267
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-16T10:32:33.000Z
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<bool> isPrime(n+1, true);
    
    isPrime[0] = false;
    isPrime[1] = false;
    
    for(int i=2; i * i <= n; i++){
        if (isPrime[i]){
            for(long long j = i * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
        
    }
    int count = 0;
    
    for(int i = 2; i <= n; i++){
            if(isPrime[i]){
                cout << i << " ";
                count++;
            }
        }
    cout << endl;
    cout << count;
    return 0;
   
}
