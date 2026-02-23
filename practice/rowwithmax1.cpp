#include<iostream>
using namespace std;

void maxones()

int main(){
    int mat[3][3] = [ [1, 1, 1], [0, 0, 1], [0, 0, 0] ];

    int ans = maxones(mat);
    cout<<ans;
}