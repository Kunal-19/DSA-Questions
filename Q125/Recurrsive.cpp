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

Node *reverse(Node *&head){
    if(head==NULL || head->next == NULL) return head;

    Node *newHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

void display(Node *head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
    Node *head = NULL;
    Node *tail = head;
    int cnt = 1;
    while(cnt<=5){
        insertAtTail(cnt,head,tail);
        cnt++;
    }
    display(head);
    head = reverse(head);
    display(head);

    return 0;
}