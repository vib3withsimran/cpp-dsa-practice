#include <bits/stdc++.h>
using namespace std;

string comparison(int suma, int sumb){
    int a= suma%2;
    int b= sumb%2;
    if(a == b){
        return "tie";
    }
    if (a > b){
        return "ajisai";
    } else{
        return "mai";
    }
}

string winner(int n, int a[], int b[]){
    for(int i=0; i<n; i++){
        if(a[i] != b[i] ){
            swap(a[i], b[i]);
            cout<<a[i]<<" "<<b[i];
            cout<<endl;
        }
    }
    int suma=0, sumb=0;
    for(int i=0; i<n; i++){
        suma += a[i];
        sumb += b[i];
    }

    string ans = comparison(suma, sumb);
    return ans;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    string wins = winner(n, a.data(), b.data());
    cout << wins << "\n";

    return 0;

}