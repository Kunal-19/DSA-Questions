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

void removeLoop(Node* head)
    {

    Node *ptr = head;
    Node *ptr1 = head;

    do{
        ptr = ptr->next;
        ptr1 = ptr1->next;
        if(ptr1) ptr1 = ptr1->next;
    }while(ptr1!=NULL && ptr1!=ptr);
    
    if(ptr1==NULL) return ;
    
    if(ptr1==ptr && ptr!=head){
        ptr = head;

        while(ptr->next!=ptr1->next){
            ptr = ptr->next;
            ptr1=ptr1->next;
        }

    }
    else{
        //Detects For Circular Linked List
        while(ptr1->next!=ptr){
            ptr1 = ptr1->next;
        }
    }
    ptr1->next = NULL;
    }

int main(){
    
    return 0;
}