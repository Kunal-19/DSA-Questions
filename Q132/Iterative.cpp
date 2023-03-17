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

Node *moveToFront(Node *head){
    if(head==NULL || head->next == NULL) return head;
    
    Node *ptr = head;
    while(ptr->next->next!=NULL){
        ptr = ptr->next;
    }
    
    Node *temp = ptr->next;
    ptr->next = NULL;
    temp->next = head;
    head = temp;
    return head;
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

void display(Node *head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Node *head1 = NULL;
    Node *tail1 = head1;
    insertAtTail(1,head1,tail1);
    insertAtTail(2,head1,tail1);
    insertAtTail(3,head1,tail1);
    insertAtTail(4,head1,tail1);

    display(head1);
    head1 = moveToFront(head1);
    display(head1);

    return 0;
}