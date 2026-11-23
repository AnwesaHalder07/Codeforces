// Codeforces: https://codeforces.com/contest/733421/S
// Problem: Tower Of Hanoi
// Submission: https://codeforces.com/contest/733421/submission/398919225
// Language: C++17 (GCC 7-32)
// Submitted: 2026-11-17T10:43:39.000Z
#include <bits/stdc++.h>
using namespace std;

void toh(int n, char src, char aux, char dest){

    if(n == 0){
        return;
    }

    toh(n-1, src, dest, aux);
   cout << "Move " << src << " to " << dest << endl;
    toh(n-1, aux, src, dest);

}

int main(){
    int n;
    cin >> n;
    char src, aux, dest;
    

    toh(n, 'A', 'B', 'C');

    return 0;
}
