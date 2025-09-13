#include<iostream>
#include<vector>
using namespace std;

void printarray(vector<int> arr){
    int n= arr.size();
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void sortarray(vector<int> &arr){
    int n= arr.size();

    for(int i=0; i<n-1; ++i){
        int min_idx = i;

        for(int j=i+1; j<n; ++j){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}
int main(){
    vector<int> arr = {65, 22, 56,12,90};

    cout<<"original array"<<endl;
    printarray(arr);

    sortarray(arr);
    cout<<endl;

    cout<<endl<<"sorted array"<<endl;
    printarray(arr);

    return 0;
}