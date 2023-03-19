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

void display(Node *head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int intersectPoint(Node* head1, Node* head2){
    if(head1==NULL || head2==NULL) return NULL;

    Node *ptr1 = head1, *ptr2 = head2;

    while(ptr1->next){
        ptr1 = ptr1->next;
    }

    ptr1->next = head2;
    ptr1 = head1, ptr2 = head1;

    do{
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        if(ptr2) ptr2 = ptr2->next;
    }while(ptr1 && ptr2 && ptr1!=ptr2);
    
    if(ptr2==NULL) return -1;
    
    ptr1 = head1;
    while(ptr1!=ptr2){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return ptr1->data;
}
int main(){
    return 0;
}