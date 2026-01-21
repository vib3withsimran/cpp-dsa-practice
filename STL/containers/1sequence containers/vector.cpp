#include<iostream>
#include<vector>
#include<algorithm>  // for find
using namespace std;

int main(){
    // //initializing a vector
    vector<int> vec = {3, 2, 5, 4, 1};
    // vector<int> vecc = {3, 2, 5, 4, 1};
    vector<int> vec2(3,10);
    vec.push_back(6);

    vec.erase(vec.begin()+1, vec.begin()+5);
    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<endl;

    for(auto i: vec2){
        cout<<i<<" ";
    }
    cout<<endl;

    
    

    // // creates a vector of size 5 where each element initialized to 9.
    // vector<int> vec2(5, 9);
    // cout<<"\nVector vec2: ";
    // for(auto i: vec2){
    //     cout<<i<<" ";
    // }

    // //initializing a vector with a array
    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // vector<int> vec3(arr, arr + n);
    // cout<<"\nVector vec3: ";
    // for(auto i: vec3){
    //     cout<<i<<" ";
    // }

    // //initializing a vector with another vector
    // vector<int> vec4(vec3.begin(), vec3.end());
    // cout<<"\nVector vec4: ";
    // for(auto i: vec4){
    //     cout<<i<<" ";
    // }
    
    // //insert elements method 1.push_back and 2.insert
    // //pushing elements to the vector
    // vec4.push_back(6);
    // cout<<"\nVector after: ";
    // for(auto i: vec4){
    //     cout<<i<<" ";
    // }

    // //inserting elements at 2 position
    // vec4.insert(vec4.begin() + 2, 10);
    // cout<<"\nVector after: ";
    // for(auto i: vec4){
    //     cout<<i<<" ";
    // }

    // //accessing and updating elements 
    // cout<<"\nThird element of vec4: "<<vec4[2]<<endl;
    // vec4[2] = 20;
    // cout<<"Updated third element of vec4: "<<vec4[2]<<endl;
    // for(auto i: vec4){
    //     cout<<i<<" ";
    // }

    // //size of vector
    // cout<<"\nSize of vec4: "<<vec4.size()<<endl; //method 1
    // cout<< "size of vec4: "<< vec4.end() - vec4.begin() <<endl; //method 2
    // int i=0; //method 3
    // for(auto x: vec4){
    //     i++;
    // } 
    // cout<<"Size of vec4: "<<i<<endl;

    // //traversing the vector using iterators
    // for(int i=0; i < vec4.size(); i++){
    //     cout<<vec4[i]<<" ";
    // }

    // //deleting elements
    // vec4.pop_back(); // removes the last element
    // cout<<"\nvec4 after pop_back: ";
    // for(auto i: vec4){
    //     cout<<i<<" ";
    // }
    // vec4.erase(find(vec4.begin(), vec4.end(), 20)); // removes the element with value 20
    // cout<<"\nvec after erase: ";
    // for(auto i: vec4){
    //     cout<<i<<" ";
    // }

    // //checking if vector is empty
    // bool isEmpty = vec4.empty(); //method 1
    // cout<<"\nIs vec4 empty? "<<(isEmpty ? "Yes" : "No")<<endl;
    // if (vec4.size() == 0){       // method 2  
    //     cout<<"Vector is empty."<<endl;
    // } else {
    //     cout<<"Vector is not empty."<<endl;
    // }
    // if(vec4.begin()== vec4.end()){ // method 3
    //     cout<<"Vector is empty."<<endl;
    // } else {
    //     cout<<"Vector is not empty."<<endl;
    // }
    
    // //resizeing the vector and new elements will be initialized 
    // cout<<"vec3 before resize: ";
    // for(auto i: vec3){
    //     cout<<i<<" ";
    // }
    // vec3.resize(3, 10);
    // cout<<"\nVector after resize: ";
    // for(auto i: vec3){
    //     cout<<i<<" ";
    // }

    // //reverse the iterators
    // reverse(vec4.begin(), vec4.end());
    // cout<<"\nReversed vec4: ";
    // for(auto i: vec4){  
    //     cout<<i<<" ";
    // }

    // //sorting in ascending order
    // sort(vec4.begin(), vec4.end());
    // cout<<"\nSorted vec4 in ascending: ";
    // for(auto i: vec4){  
    //     cout<<i<<" ";
    // }

    // //sorting in descending order
    // sort(vec4.begin(), vec4.end(), greater<>());  //method 1
    // cout<<"\nSorted vec4 in descending: ";
    // for(auto i: vec4){  
    //     cout<<i<<" ";
    // }

    // sort(vec4.begin(), vec4.end());
    // reverse(vec4.begin(), vec4.end());  //method 2

    // //to copy a vector 
    // vector<int> vec5(vec4); // method 1
    // cout<<"\nCopied vec5: ";
    // for(auto i: vec5){  
    //     cout<<i<<" ";
    // }

    // //method 2- assigning a vector
    // vector<int> vec6;
    // vec6.assign(vec4.begin(), vec4.end());
    // cout<<"\nCopied vec6: ";
    // for(auto i: vec6){  
    //     cout<<i<<" ";
    // }

    // //method3- pushing back elements
    // vector<int> vec7;
    // for(auto i: vec){
    //     vec7.push_back(i);
    // }
    // cout<<"\nCopied vec7: ";
    // for(auto i: vec7){  
    //     cout<<i<<" ";
    // }

    // //removing duplicates from the vector
    // vector<int> vec8 = {1, 2, 2, 3, 4, 4, 5};
    // sort(vec8.begin(), vec8.end()); // sort first
    // auto it = unique(vec8.begin(), vec8.end()); // duplicates at the end 
    // cout<<endl<<vec8.size();
    // vec8.erase(it, vec8.end()); // erase duplicates
    // cout<<endl<<vec8.size();
    // cout<<"\nVector after removing duplicates: ";
    // for(auto i: vec8){  
    //     cout<<i<<" ";
    // }

    // //last element of vector
    // cout<<endl;
    // cout<<"Last element: "<< vec8.back();


    return 0;
}