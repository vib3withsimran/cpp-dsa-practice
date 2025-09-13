#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end){
    vector<int> temp;

    int i=start; int j=mid+1;
    
    //to push the compared elements of both the divided array
    while(i<=mid && j<=end){
        if(arr[i]<= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    //to push the uncompared elements
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    //now push the sorted array in the main array 
    for(int idx=0; idx<temp.size(); idx++){
        arr[start +idx] = temp[idx];
    }

}

void mergesort(vector<int> &arr, int start, int end){
    if(start< end){
        int mid= start + (end-start)/2;


        mergesort(arr, start, mid);
        mergesort(arr, mid +1, end);

        merge(arr, start, mid, end);
    }
}

void printarr(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr= {12,31,35,8,32,17};
    int n= arr.size();

    mergesort(arr, 0, n-1);
    printarr(arr);

    return 0;
}