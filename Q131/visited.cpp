#include<stdc++.h>
#include<unordered_map>
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

void removeDup(Node *&head){
    if(head==NULL || head->next==NULL) return;

   unordered_map<int,bool> mp;
   
   Node *prev = NULL;
   Node *ptr = head;

   while(ptr){
    if(!mp[ptr->data]){
        mp[ptr->data] = true;
        prev = ptr;
        ptr = ptr->next;
    } 
    else{
        prev->next = ptr->next;
        ptr->next = NULL;
        delete ptr;
        ptr = prev->next;
    }
   }
}


int main(){
    Node *head = NULL;
    Node *tail = head;
    insertAtTail(2,head,tail);
    insertAtTail(4,head,tail);
    insertAtTail(2,head,tail);
    insertAtTail(4,head,tail);

    display(head);
    removeDup(head);
    display(head);
    return 0;
}