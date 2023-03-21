#include<stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

void insertAtTail(int data,Node *&head,Node *&tail){
    Node *temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail = head;
        return ;
    }

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

Node* reverseDLL(Node * head)
{
    Node *ptr = head,*newHead = NULL;
    
    while(ptr){
        Node *temp = ptr->next;
        ptr->next = ptr->prev;
        ptr->prev = temp;
        newHead = ptr;
        ptr = temp;
    }
    
    return newHead;
}


void display(Node *head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Node *head = new Node(1);
    Node *tail = head;
    insertAtTail(2,head,tail);
    insertAtTail(3,head,tail);
    display(head);
    head = reverseDLL(head);
    display(head);
    return 0;
}