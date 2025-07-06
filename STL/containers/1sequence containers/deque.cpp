#include<iostream>
#include<deque>
using namespace std;

//In C++, deque container provides fast insertion and deletion at both ends. Stands for Double Ended QUEue
int main(){
    //creating a new deque of 5 elements
    deque<int> dq = {1,4,3,2,5};
    for(auto x: dq){
        cout<<x<<" ";
    }
    cout<<endl;

    //inserting element at back and front
    dq.push_back(6);
    dq.push_front(0);

    //insert element at third position
    auto it= dq.begin() +2;
    dq.insert(it, 7);
    for(auto x: dq){
        cout<<x<<" ";
    }
    cout<<endl;

    //traversiing using for loop
    for(int i=0; i<dq.size(); i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;

    //delete element from front and back
    dq.pop_back(); //last element
    dq.pop_front(); //front element
    dq.erase(dq.begin()); //first element
    dq.erase(it);  //third positioned
    for(auto x: dq){
        cout<<x<<" ";
    }

    return 0;
}

// Given a stack of integers of size N, your task is to complete the function pairWiseConsecutive(), that checks whether numbers in the stack are pairwise consecutive or not. The pairs can be increasing or decreasing, and if the stack has an odd number of elements, the element at the top is left out of a pair. The function should retain the original stack content.
// bool pairWiseConsecutive(stack<int> s) {
//     // Code here
//     if(s.size()%2!=0){
//         s.pop();
//     }
//    while(!s.empty()){
//         int prev=s.top();
//         s.pop();
//         int curr=s.top();
//         s.pop();
//         if(abs(prev-curr)!=1)
//             return 0;
        
//     }
//     return 1;
// }