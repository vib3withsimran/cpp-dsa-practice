#include<iostream>
using namespace std;

int binarySearch(int arr[], int target, int st, int end){
    int mid= st + (end- st)/2;

    if(st<= end){
        if(target < arr[mid]){
            end= mid -1;
            return binarySearch(arr, target, st, end);
        }
        else if(target > arr[mid]){
            st = mid+1;
            return binarySearch(arr, target, st, end);
        }
        else{
            return mid;
        }
    }
    

    return -1;
}
int main(){
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int target = 0;

    int st=0; int n= sizeof(arr)/sizeof(arr[0]);
    int last = n-1;
    bool found = false;

    while(st <= last){
        int mid = st + (last-st)/2;

        if(arr[mid] == target){
            cout<<"The target is found at the index "<<mid<<endl;
            found = true;
        }
        if(target > arr[mid]){
            st= mid +1;
        }
        else{
            last = mid -1;
        }
    }

    if(!found){
        cout<<"The target is not found"<<endl;
    }

    int index = binarySearch(arr, target, 0, n-1);
    
    if(index == -1){
        cout<< "not found!!"<<endl;
    }else{
        cout<<"index:  "<<index<<endl;
    }

    
    return 0;
}