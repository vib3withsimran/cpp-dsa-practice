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

        void push_front(int val){
            Node * newNode =  new Node(val); //dynamic 
            //Node newNode(val); //static - delete after adding the value 

            if(head == NULL){
                head = tail = newNode;
            }
            
            else{
                newNode-> next = head;
                head = newNode;
            }
        }
        
        void lengthOf(){
            if(head == NULL){
                cout<<"Empty list"<<endl;
                return;
            }
            
            Node *temp = head;
            int count=1;
            while(temp->next != NULL){
                count++;
                temp= temp->next;
            }

            cout<<"Length of list: "<<count<<endl;
        }

        void insert(int val, int pos){
            if(pos <0){
                cout<<"invalid position"<<endl;
                return;
            }
            else if(pos == 0){
                push_front(val);
                return;
            }

            Node *temp = head;
            Node *temp1 = new Node(val);
            for(int i=1; i<pos; i++){
                temp= temp->next;
            }

            temp1->next = temp->next;
            temp->next = temp1;
        }

        int search(int key){
            if(head == NULL){
                return -1;
            }

            Node *temp = head;
            int idx =0;
            while(temp!= NULL){
                if(temp->data == key){
                    return idx;
                }

                temp= temp->next;
                idx++;
            }

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
    list ll;

    ll.push_front(5);
    ll.push_front(6);
    ll.push_front(7);

    ll.insert(10, 2);
    ll.print();

    cout<<"10 is present at: "<<ll.search(10);

    return 0;
}

