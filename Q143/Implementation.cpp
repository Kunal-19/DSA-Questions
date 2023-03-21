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

int main(){
    
    return 0;
}