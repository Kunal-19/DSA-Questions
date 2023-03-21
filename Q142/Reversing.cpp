#include<stdc++.h>
using namespace std;

/*
T.C : O(n)
S.C : O(1)
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
Node *reverse(Node *head){
        Node *ptr = NULL;
        Node *ptr1 = head;

        while(ptr1){
            Node *ptr2 = ptr1->next;
            ptr1->next = ptr;
            ptr = ptr1;
            ptr1 = ptr2;
        }
        return ptr;
    }


bool isPalindrome(Node* head) {
        if(head->next==NULL) return true;

        Node *slow = head;
        Node *fast = head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        Node *temp = slow->next;
        slow->next = NULL;

        Node *ptr1 = head;
        Node *ptr2 = reverse(temp);

        while(ptr2 && ptr1){
            if(ptr1->data == ptr2->data){
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            else return false;
        }

        return true;
    }

int main(){
    Node *head = new Node(1);
    Node *tail = head;

    insertAtTail(2,head,tail);
    insertAtTail(3,head,tail);
    insertAtTail(2,head,tail);
    insertAtTail(1,head,tail);
    cout << isPalindrome(head) << endl;
    return 0;
}