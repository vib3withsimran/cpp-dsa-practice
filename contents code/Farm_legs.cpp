#include <bits/stdc++.h>
using namespace std;

int TotalConfi(int n){
    int count = 0;
    int q;
    for(int i = 0; i < n; i++){
        q = n - (4 * i);
        if(q % 2 == 0 && q >= 0){
            count++;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if(!(cin >> n)) return 0;
    if(n>= 1 && n <= 100){
        cout << TotalConfi(n) << "\n";
    }
    else{
        cout<<"0";
    }

    return 0;
}

// 5
// 2
// 3
// 4
// 6
// 100
