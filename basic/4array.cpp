#include<iostream>
using namespace std;

// Functions that take array as argument
void sized_array_notation(int arr[5]) {}

void unsized_array_notation(int arr[]) {}

void pointer_notation(int* arr) {}

int main() {
    int arr[] = {2, 4, 8, 12, 16};
    
    // Accessing fourth element
    cout << arr[3] << endl;
    
    // Accessing first element
    cout << arr[0]<<endl;
    
     // Updating second element
    arr[1] = 90;
    cout << arr[1]<<endl; 

     // Traversing and printing arr
    for (int i = 0; i < 5; i++){
         cout << arr[i] << " ";
    }
    cout<<endl;

     // Size of one element of an array
    cout << "Size of arr[0]: " << sizeof(arr[0])<< endl;

    // Size of  'arr'
    cout << "Size of arr: " << sizeof(arr) << endl;

    // Length of an array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of an array: " << n << endl;


    // Passing array
    sized_array_notation(arr);
    unsized_array_notation(arr);
    pointer_notation(arr);

    
    return 0;
}