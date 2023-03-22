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

vector<vector<int> >getTriplets(Node *head,Node *tail,int x){
    Node *ptr = head;
    vector<vector<int> > ans;

    while(ptr){
        Node *s = ptr->next, *e = tail;
        int data = ptr->data;
        if(s==NULL) return ans;
        while(s<e){
            int sum = s->data + e->data;

            if(sum + data == x){
                vector<int> v;
                v.push_back(ptr->data);
                v.push_back(s->data);
                v.push_back(e->data);
                ans.push_back(v);

                int data1 = s->data, data2 = e->data;

                while(s && data1==s->data)s = s->next;
                while(s!= ptr && data2 == e->data) e = e->prev;
            }
            else if(sum + data > x) e = e->prev;
            else s = s->next;
        }
        while(ptr && ptr->data==data) ptr = ptr->next;
    }
    return ans;
} 

void display(vector<vector<int> >  arr){
    int n = arr.size();

    for(int i=0; i<n ;i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
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
    vector<vector<int> > v = getTriplets(head,tail,17);
    display(v);
    return 0;
}