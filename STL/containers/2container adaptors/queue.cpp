#include<iostream>
#include<queue>
#include<stack>
using namespace std;
//fifo- first in, first out
//A ticket counter line - first person in line gets served first

int main(){
    // creating a queue of integers
    queue<int> q;

    //pushing elements in the queue
    q.push(3);
    q.push(4);
    q.push(5);

    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    // creating a queue q2 from q
    queue<int> q2(q);
    cout<<"\nprinting q2 queue:"<<endl;
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        //to delete the elements - q.pop()
        q2.pop();
    }

    // accessing the front and back elements
    cout<<"\nfront element: "<<q.front()<<endl;
    cout<<"back element: "<<q.back()<<endl;


    //reversing
    stack<int> s;
    cout<<"q queue:- \n";
    while(!q.empty()){
        s.push(q.front());
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\nreverse of q queue:- \n";
    while(!s.empty()){
        q.push(s.top());
        cout<<s.top()<<" ";
        s.pop();
    }

    //swaping syntax
    // queue1.swap(queue2);
    // swap(queue1, queue2);



    return 0;
}