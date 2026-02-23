#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node * next;

        Node(int value){
            data = value;
            next = NULL;
        }
};

class list{
    Node * head; 
    Node *tail;

    public:
        list(){
            head = tail = NULL;
        }

        void push_back(int val){
            Node *temp = new Node(val);

            if(head == NULL){
                head = tail = temp;
            }else{
                tail->next = temp;
                tail = temp;
            }
        }

        void pop_front(){
            if(head == NULL){
                cout<<"empty list"<<endl;
                return;
            }

            Node *temp = head;

            head= head->next;
            cout<<temp->data<<endl;
            temp->next = NULL;

            delete temp;
        }

        

        void pop_back(){
            if(head == NULL){
                cout<<"empty list"<<endl;
                return;
            }

            Node *temp = head;

            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            cout<<tail->data<<endl;
            delete tail;
            tail = temp;
        }

        void print(){
            Node *temp = head;
            while(temp != NULL){
                cout<< temp->data<<endl;
                temp = temp->next;
            } 

        }
};

int main(){
    list l1;

    l1.push_back(10);
    l1.push_back(100);
    l1.push_back(1000);
    l1.print();
    
    l1.pop_back();
    l1.pop_front();
    

    return 0;
}

