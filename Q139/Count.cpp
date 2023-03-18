#include<stdc++.h>
using namespace std;

/*
T.C: O(n)
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

int count(Node *head){
    Node *ptr = head;
    int cnt = 0;
    while(ptr){
        cnt++;
        ptr = ptr->next;
    }
    return cnt;
}

Node *middle(Node *head){
    int cnt = count(head);
    cnt = cnt>>1;

    Node *ptr = head;

    while(cnt){
        ptr = ptr->next;
        cnt--;
    }

    return ptr;
}
int main(){
    Node *head = NULL;
    Node *tail = head;
    insertAtTail(1,head,tail);
    insertAtTail(2,head,tail);
    insertAtTail(100,head,tail);
    insertAtTail(4,head,tail);
    // insertAtTail(5,head,tail);

    display(head);
    cout << middle(head)->data << endl;
    return 0;
}