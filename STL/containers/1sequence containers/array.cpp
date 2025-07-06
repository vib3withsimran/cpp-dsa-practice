#include<iostream>
#include<array>
#include<algorithm>  // for sort
using namespace std;

int main(){
    array<int, 5> arr = {3, 2, 5, 4, 1};
    array<int, 5> arr2 = {1, 2, 3, 4, 5};
    array<string, 2> arr3 = {"Hello", "World"};

    // sizes
    cout<<"Size of arrays"<<endl;
    cout<<arr.size()<<endl;
    cout<<arr2.size()<<endl;
    cout<<arr3.size()<<endl;

    //accesing elemts
    cout<<"\ninitial emelemts: ";
    for( auto i: arr){
        cout<<i<<" ";
    }

    //sorting 
    sort(arr.begin(), arr.end());
    cout<<"\nSorted elements: ";
    for( auto i: arr){
        cout<<i<<" ";
    }

    //filling with a value only 
    arr.fill(10);
    cout<<"\nArray after filling with 10: ";
    for( auto i: arr){
        cout<<i<<" ";
    }

    //accessing elements of string array
    cout<<"Elements of arr3: ";
    for(auto &s : arr3){
        cout<<s<<" ";
    }

    //for specific element access
    cout<<"\nFirst element of arr: "<<arr[0]<<endl;
    cout<<"First element of arr2: "<<arr2.at(0)<<endl;

    //to access the first and last element directly 
    cout<<"First element of arr: "<<arr2.front()<<endl;
    cout<<"Last element of arr2: "<<arr2.back()<<endl;

    //To swam the elemets or array
    swap(arr2.at(0), arr2.at(3));
    cout<<"Array after swapping first and last elements: "<<endl;
    for( auto i: arr2){
        cout<<i<<" ";
    }

    cout<<endl;
    //to check it is empty or not
    bool isEmpty = arr.empty();
    cout<<isEmpty<<endl;

    //cend and cbegin is to get the const iterator to the end and beginning of the array, value can not be modified
    cout<<"Const iterator to the first element: "<<*arr2.cbegin()<<endl;
    cout<<"Const iterator to the last element: "<<*(arr2.cend())<<endl;

    return 0;

}