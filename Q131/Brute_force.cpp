#include<stdc++.h>
using namespace std;

/*
T.C: O(n^2)
S.C: O(1)
*/


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
    if(head == NULL || head->next == NULL) return;

    Node *ptr = head;

    while(ptr!=NULL){
        Node *ptr1 = ptr->next;
        Node *prev = ptr;

        while(ptr1!=NULL){
            if(ptr->data == ptr1->data){
                prev->next = ptr1->next;
                ptr1->next = NULL;
                delete ptr1;
                if(prev) ptr1 = prev->next;
            }
            else{
                prev = ptr;
                ptr1 = ptr1->next;
            }
        }

        ptr = ptr->next;
    }
}


int main(){
    Node *head = NULL;
    Node *tail = head;
    insertAtTail(4,head,tail);
    insertAtTail(2,head,tail);
    insertAtTail(4,head,tail);
    insertAtTail(2,head,tail);

    display(head);
    removeDup(head);
    display(head);
    return 0;
}