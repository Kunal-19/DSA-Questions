#include<stdc++.h>
using namespace std;

class Stack{
public:
    int top;
    int *arr;
    int n;

    Stack(int size){
        top = -1;
        this->n = size;
        arr = new int[n];
    }
    
    bool isFull(){
        if(top == n-1) return true;
        return false;
    }

    bool isEmpty(){
        if(top==-1) return true;
        return false;
    }

    void push(int data){
        if(isFull()){
            cout << "Stack-Overflow" << endl;
            return ;
        } 
        top++;
        arr[top] = data;
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack - Underflow" << endl;
            return ;
        }
        top--;
    }

    void peek(){
        if(isEmpty()){
            cout << "No Element" << endl;
            return ;
        }

        cout << arr[top] << endl;
    }

    int size(){
        return top + 1;
    }
};


int main(){
    Stack st(10);
    cout << st.size()<< endl;
    st.push(1);
    st.push(2);
    st.push(3);
    // st.push(4);
    cout << st.size()<< endl;
    st.peek();
    cout << st.isFull() << endl;
    st.pop();
    st.peek();
    return 0;
}