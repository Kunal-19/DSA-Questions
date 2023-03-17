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

Node *removeLoop(Node* head)
    {

    Node *ptr = head;
    Node *ptr1 = head;

    do{
        ptr = ptr->next;
        ptr1 = ptr1->next;
        if(ptr1) ptr1 = ptr1->next;
    }while(ptr1!=NULL && ptr1!=ptr);
    
    if(ptr1==NULL) return NULL;
    
    ptr = head;

    while(ptr!=ptr1){
        ptr = ptr->next;
        ptr1=ptr1->next;
    }
    return ptr;
}

int main(){
    
    return 0;
}