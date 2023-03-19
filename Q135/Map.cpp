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
    if(head1==NULL && head2==NULL) return NULL;
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;

    Node *ans_head = NULL;
    Node *ans_tail = NULL;
    Node *ptr1 = head1 , *ptr2 = head2;
    
    map<int,int> mp1;
    while(ptr1){
        mp1[ptr1->data]++;
        ptr1 = ptr1->next;
    }

    map<int,int> mp2;
    while(ptr2){
        mp2[ptr2->data]++;
        ptr2 = ptr2->next;
    }
    
    for(auto it : mp1){
        int data = it.first;
        int freq1 = it.second;
        int freq2 = mp2[data];

        if(freq2){
            int freq = min(freq1,freq2);

            while(freq){
                insertAtTail(data,ans_head,ans_tail);
                freq--;
            }
        }
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