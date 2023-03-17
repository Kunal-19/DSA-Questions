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

void reverse(Node *&head){
    Node *prev1 = NULL;
    Node *prev2 = head;

    while(prev2 !=NULL){
        Node *prev3 = prev2->next;
        prev2->next = prev1;
        prev1 = prev2;
        prev2 = prev3;
    }
    head = prev1;
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
    while(cnt<=6){
        insertAtTail(cnt,head,tail);
        cnt++;
    }
    display(head);
    reverse(head);
    display(head);

    return 0;
}