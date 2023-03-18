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

void removeDup(Node *&head){
    Node *ptr = head;
    Node *ptr1 = head->next;

    while(ptr1){
        if(ptr->data == ptr1->data){
            ptr->next = ptr1->next;
            ptr1->next = NULL;
            delete  ptr1;
            ptr1 = ptr->next;
        }
        else{
            ptr = ptr->next;
            ptr1 = ptr1->next;
        }
    }
}

int main(){
    Node *head = NULL;
    Node *tail = head;
    insertAtTail(2,head,tail);
    insertAtTail(2,head,tail);
    insertAtTail(2,head,tail);
    insertAtTail(2,head,tail);

    display(head);
    removeDup(head);
    display(head);
    return 0;
}