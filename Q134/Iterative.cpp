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

pair<int,int> sumCarry(int sum){
    pair<int,int> p;
    if(sum>=10){
        p = make_pair(sum%10,1);
    }
    else p = make_pair(sum,0);

    return p;
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
    insertAtTail(2,head1,tail1);
    insertAtTail(4,head1,tail1);
    insertAtTail(3,head1,tail1);

    Node *head2 = NULL;
    Node *tail2 = head2;
    insertAtTail(7,head2,tail2);
    insertAtTail(6,head2,tail2);
    insertAtTail(6,head2,tail2);

    //Reversing Linked List
    reverse(head1);
    reverse(head2);

    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *ans_head = NULL;
    Node *ans_tail = ans_head;
    int carry = 0;

    while(ptr1!=NULL && ptr2!=NULL){
        int data1 = ptr1->data;
        int data2 = ptr2->data;
        int temp = data1 + data2 + carry;

        pair<int,int> p = sumCarry(temp);
        carry = p.second;
        
        insertAtTail(p.first,ans_head,ans_tail);
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    while(ptr1!=NULL){
        int data1 = ptr1->data + carry;
        pair<int,int> p = sumCarry(data1);
        carry = p.second;
        
        insertAtTail(p.first,ans_head,ans_tail);
        ptr1 = ptr1->next;
    }

    while(ptr2!=NULL){
        int data2 = ptr2->data + carry;
        pair<int,int> p = sumCarry(data2);
        carry = p.second;
        
        insertAtTail(p.first,ans_head,ans_tail);
        ptr2 = ptr2->next;
    }

    if(carry) insertAtTail(1,ans_head,ans_tail);
    reverse(ans_head);
    reverse(head1);
    reverse(head2);
    display(head1);
    display(head2);
    display(ans_head);
    return 0;
}