#include<iostream>
#include<vector>
using namespace std;    

void BubbleSort(vector<int> &arr, int n){
    if(n==1){
        return;
    }

    int count=0;

    for(int i=0; i<n-1; i++){
        if(arr[i]> arr[i+1]){
            swap(arr[i], arr[i+1]);
            count++;
        }
    }

    if(count=0){
        return;
    }

    BubbleSort(arr, n-1);
}

void printArray(const vector<int> &arr){
    for(int num : arr){
        cout<<num<<" ";
    }
}

int main(){
    vector<int>arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();
    BubbleSort(arr, n);
    cout<<"Sorted array : \n";
    printArray(arr);
    return 0;
}