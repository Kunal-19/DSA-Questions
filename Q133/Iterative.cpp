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
    insertAtTail(9,head1,tail1);
    insertAtTail(9,head1,tail1);
    insertAtTail(9,head1,tail1);

    //Number
    display(head1);

    //Reversing Linked List
    reverse(head1);

    Node *ptr1 = head1;
    int carry = 1;
    Node *prev = NULL;

    while(ptr1!=NULL){
        int data1 = ptr1->data;
        int temp = data1 + carry;

        pair<int,int> p = sumCarry(temp);
        carry = p.second;        
        ptr1->data = p.first;
        prev = ptr1;
        ptr1 = ptr1->next;
    }

    if(carry){
        Node *msb = new Node(1);
        prev->next = msb;
    }

    reverse(head1);
    display(head1);
    return 0;
}