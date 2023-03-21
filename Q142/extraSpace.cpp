#include<stdc++.h>
using namespace std;

/*
T.C : O(n)
S.C : O(n)
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

bool isPalindrome(Node* head) {
        vector<int> original;
        Node *ptr = head;
        while(ptr){
            original.push_back(ptr->data);
            ptr = ptr->next;
        }

        int n = original.size();
        int i = 0, j=n-1;

        while(i<j){
            if(original[i]!=original[j]) return false;
            else{
                i++;
                j--;
            }
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