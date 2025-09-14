#include<iostream>
#include<vector>
using namespace std;

void RecursiveInsertSort(vector<int> &arr, int n){
    if(n<=1){
        return;
    }

    RecursiveInsertSort(arr, n-1);
    int key= arr[n-1];
    int j= n-2;

    while(j>= 0 && arr[j]>key){
        arr[j+1]= arr[j];
        j--;
    }
    arr[j+1]= key;
}

void printarr(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr= {14, 1, 6,0};
    int n= arr.size();

    RecursiveInsertSort(arr, n);
    printarr(arr);

    return 0;
}