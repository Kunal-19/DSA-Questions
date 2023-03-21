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

bool isCircular(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    
    do{
        slow = slow->next;
        fast = fast->next;
        if(fast) fast = fast->next;
    }while(fast && fast!=slow);
    
    if(fast!=NULL && fast==slow) return true;
    return false;
}

int main(){
    Node *head = new Node(1);
    Node *tail = head;

    insertAtTail(2,head,tail);
    insertAtTail(3,head,tail);
    insertAtTail(4,head,tail);
    insertAtTail(5,head,tail);
    cout << isCircular(head) << endl;
    tail->next = head;
    cout << isCircular(head) << endl;
    return 0;
}