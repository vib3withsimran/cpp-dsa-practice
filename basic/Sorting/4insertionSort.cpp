#include<iostream>
using namespace std;
//ascending order
void AscinsertSort(int arr[], int n){
    for(int i=1; i<n; ++i){
        int key= arr[i];
        int j= i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]= arr[j];
            j= j-1;
        }
        arr[j+1]= key;
    }
}

//descending order
void DesInsertOrder(int arr[], int n){
    for(int i=1;i<n; i++){
        int key = arr[i];
        int j= i-1; 

        while(j>=0 && arr[j] < key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= key;
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {12,13,5,11,6};
    int n= sizeof(arr)/sizeof(arr[0]);

    DesInsertOrder(arr,n);
    printArray(arr, n);


    return 0;
}