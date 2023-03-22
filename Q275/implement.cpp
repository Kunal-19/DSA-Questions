#include<stdc++.h>
using namespace std;

class Queue {
public:
    int Front;
    int rear;
    int *arr;
    int n;

    Queue(){
        n = 100000;
        arr = new int[n];
        Front = -1;
        rear = -1;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(Front == -1) return true;
        return false;
    }

    void enqueue(int data) {
        if(isEmpty()){
            arr[++Front] = data;
            rear++;
            return ;
        }
        arr[++rear] = data;
    }

    int dequeue() {
        if(isEmpty()){
            return -1;
        }
        int data = arr[Front++];
        if(rear<Front){
            Front = -1;
            rear = -1;
        } 
        return data;
    }

    int front() {
        if(isEmpty()) return -1;
        return arr[Front];
    }
};

int main(){
    
    return 0;
}