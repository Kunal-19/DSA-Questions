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
    Node *ptr1 = head1, *ptr2 = head2;

    while(ptr1!=ptr2){
        if(ptr1) ptr1 = ptr1->next;
        else ptr1 = head2;

        if(ptr2) ptr2 = ptr2->next;
        else ptr2 = head2;
    }

    if(ptr1==NULL) return -1;
    return ptr1->data;
}
int main(){
    return 0;
}