#include<iostream>
#include<stack>
using namespace std;
//lifo- last in, first out 
//A pile of plates - you can only add/remove from the top
int main(){
    stack<int> st;

    //pushing the elements
    st.push(1);
    st.push(2);
    st.push(3);

    //to delete
    st.pop();

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    //initialising another stack st2 from st
    stack<int> st2 (st);

    return 0;
}