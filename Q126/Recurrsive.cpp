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

Node *reverse(Node *head){
    Node *prev1 = NULL;
    Node *prev2 = head;

    while(prev2 !=NULL){
        Node *prev3 = prev2->next;
        prev2->next = prev1;
        prev1 = prev2;
        prev2 = prev3;
    }
    return prev1;
}

Node *reverseKgroups(Node *&head,int k){
    if(head==NULL) return NULL;
    int t = k;
    k--;
    Node *ptr = head;
    while(k && ptr!=NULL){
        ptr = ptr->next;
        k--;
    }

    Node *right = NULL;
    if(ptr){
        right = ptr->next;
        ptr->next = NULL;
    }
    
    Node *newHead = reverse(head);
    head->next = reverseKgroups(right,t);

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
    while(cnt<=10){
        insertAtTail(cnt,head,tail);
        cnt++;
    }
    display(head);

    int k;
    cout << "Enter the value of k: ";
    cin>> k;

    display(head);
    head = reverseKgroups(head,4);
    display(head);
    return 0;
}