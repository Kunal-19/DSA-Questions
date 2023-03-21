#include<stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
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
    temp->prev = tail;
    tail = temp;
}

vector<pair<int,int> >getPairSum(Node *head,Node *tail,int x){
    Node *first = head, *last = tail;
    vector<pair<int,int> > ans;
    while(first!=last){
        if(first->data + last->data == x){
            ans.push_back(make_pair(first->data,last->data));

            int data1 = first->data , data2 = last->data ;
            while(first->data == data1){
                first = first->next;
            }

            while(last->data == data2) last = last->prev;
        }
        else if(first->data + last->data > x) last = last->prev;
        else first = first->next;
    }

    return ans;
} 

void display(vector<pair<int,int> >  arr){
    int n = arr.size();

    for(int i=0; i<n ;i++){
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    cout << endl;
}
int main(){
    Node *head = new Node(1);
    Node *tail = head;
    insertAtTail(2,head,tail);
    insertAtTail(4,head,tail);
    insertAtTail(5,head,tail);
    insertAtTail(6,head,tail);
    insertAtTail(8,head,tail);
    insertAtTail(9,head,tail);
    vector<pair<int,int> > v = getPairSum(head,tail,7);
    display(v);
    return 0;
}