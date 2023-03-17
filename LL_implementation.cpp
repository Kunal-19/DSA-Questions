#include<stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(int data,Node *&head,Node *&tail){
    Node *temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail = head;
        return ;
    }

    temp->next = head;
    head = temp;
}

void insertAtTail(int data,Node *&head,Node *&tail){
    Node *temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail = head;
        return ;
    }

    tail->next = temp;
    tail = temp;
}

void insertAtMiddle(int data,int pos,Node *&head,Node *&tail){
    Node *temp = new Node(data);
    if(pos == 1 && head == NULL){
        head = temp;
        tail = head;
        return ;
    }

    Node *ptr = head;
    pos-=2;

    while(pos){
        ptr = ptr->next;
        pos--;
    }

    temp->next = ptr->next;
    ptr->next = temp;
}

void delAtFirst(Node *&head){
    Node *temp = head->next;
    head->next = NULL;
    delete head;
    head = temp;
}

void delAtEnd(Node *&head,Node *&tail){
    Node *ptr = head;
    while(ptr->next != tail){
        ptr = ptr->next;
    }

    ptr->next = NULL;
    delete tail;
    tail = ptr;
}

void delAtMiddle(int pos,Node *&head,Node *&tail){
    if(pos==1){
        Node *temp = head->next;
        head->next = NULL;
        delete head;
        head = temp;
        return ;
    }

    Node *ptr = head;
    pos-=2;

    while(pos){
        ptr = ptr->next;
        pos--;
    }

    Node *temp = ptr->next;
    if(ptr->next) ptr->next = ptr->next->next;
    else ptr->next = NULL;

    temp->next = NULL;
    delete temp;
}

bool IsEmpty(Node *head){
    if(head==NULL) return true;
    return false;
}

int main(){
    Node *head = NULL;
    Node *tail = head;
    insertAtHead(1,head,tail);
    insertAtHead(2,head,tail);
    insertAtMiddle(4,2,head,tail);
    delAtFirst(head);
    delAtEnd(head,tail);
    delAtMiddle(2,head,tail);
    cout << head->next->data << endl;
    return 0;
}