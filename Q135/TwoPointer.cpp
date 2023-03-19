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

Node* findIntersection(Node* head1, Node* head2)
{
    Node *ans_head = NULL;
    Node *ans_tail = NULL;
    Node *ptr1 = head1 , *ptr2 = head2;
    
    
    
    while(ptr1 && ptr2){
        if(ptr1->data==ptr2->data){
            insertAtTail(ptr1->data,ans_head,ans_tail);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else if(ptr1->data<ptr2->data) ptr1 = ptr1->next;
        else ptr2 = ptr2->next;
        
    }
    
    return ans_head;
}

void display(Node *head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Node *head1 = new Node(1);
    Node *tail1 = head1;
    insertAtTail(2,head1,tail1);
    insertAtTail(3,head1,tail1);
    insertAtTail(4,head1,tail1);
    insertAtTail(6,head1,tail1);

    Node *head2 = new Node(2);
    Node *tail2 = head2;
    insertAtTail(4,head2,tail2);
    insertAtTail(6,head2,tail2);
    insertAtTail(8,head2,tail2);

    Node *ans = findIntersection(head1,head2);
    display(ans);
    return 0;
}