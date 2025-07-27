#include <iostream>

class Node{
public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;            //always initalized to NULL!
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* NewNode = new Node(val);
        if(head == NULL){
            head = tail = NewNode;
            return;
        }
        else{
            NewNode->next = head;
            head = NewNode;
        }
    }

        void push_back(int val){
        Node* NewNode = new Node(val);
        if(tail == NULL){
            head = tail = NewNode;
            return;
        }
        else{
            tail->next = NewNode;
            tail = NewNode;
        }
    }

    void printLL(){
        Node* temp = head;

        while(temp != NULL){

            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }


};

int main(){

    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);

    ll.printLL();

    return 0;
}