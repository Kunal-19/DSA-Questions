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

bool cycleDetect(Node *head){
    if(head->next==NULL) return false;

    Node *ptr = head;
    Node *ptr1 = head;

    do{
        ptr = ptr->next;
        ptr1 = ptr1->next;
        if(ptr1) ptr1 = ptr1->next;
    }while(ptr1!=NULL && ptr1!=ptr);

    if(ptr==ptr1) return true;
    return false;
}

int main(){
    
    return 0;
}