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

Node *middle(Node *head){
    Node *ptr = head;
    Node *ptr1 = head->next;

    while(ptr1 && ptr1->next){
        ptr = ptr->next;
        ptr1 = ptr1->next;
        if(ptr1) ptr1 = ptr1->next;
    }
    return ptr;
}

Node *merge(Node *head1, Node *head2){
    if(head1==NULL && head2==NULL) return NULL;
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;

    Node *ptr1 = NULL;
    Node *ptr2 = NULL;
    Node *newHead = NULL;

    if(head1->data <= head2->data){
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        ptr1 = head2;
        ptr2 = head1;
    }

    newHead = ptr1;

    while(ptr1 && ptr2){
        if(ptr1->data<= ptr2->data){
            if(ptr1->next && (ptr1->next->data > ptr2->data)){
                Node *temp = ptr2->next;
                ptr2->next = ptr1->next;
                ptr1->next = ptr2;
                ptr2 = temp;
            }
        }
        ptr1 = ptr1->next;
    }

    if(ptr2){
        Node *ptr = newHead;
        while(ptr->next){
            ptr = ptr->next;
        }
        ptr->next = ptr2;
    }

    return newHead;
}

Node* mergeSort(Node *head){
    if(head==NULL || head->next == NULL) return head;

    //Middle of LL
    Node *mid = middle(head);
    Node *next = mid->next;
    mid->next = NULL;

    //Divide
    Node *left = mergeSort(head);
    Node *right = mergeSort(next);

    //Merging LL
    head = merge(left,right);
    return head;
}

int main(){
    Node *head = NULL;
    Node *tail = head;
    insertAtTail(4,head,tail);
    insertAtTail(2,head,tail);
    insertAtTail(1,head,tail);
    insertAtTail(3,head,tail);
    insertAtTail(-1,head,tail);

    display(head);
    head = mergeSort(head);
    display(head);
    return 0;
}