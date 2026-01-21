#include<iostream>
#include<vector>
using namespace std;

void printarray(vector<int> arr){
    int n= arr.size();
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

//asc
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

//desc
void desSelectionSor(vector<int> &arr){
    int n= arr.size();

    for(int i=0; i<n-1; i++){
        int smallestIdx= i;

        for(int j= i+1;j<n; j++){
            if(arr[j] > arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[smallestIdx], arr[i]);
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

    cout<<endl;
    desSelectionSor(arr);
    printarray(arr);

    return 0;
}