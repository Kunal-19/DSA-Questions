#include<stdc++.h>
using namespace std;

class twoStacks{
    int *arr;
    int n ;
    int top1,top2;

    twoStacks(){
        n = 10000;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }

    void push1(int data){
        arr[++top1] = data;
    }

    void push2(int data){
        arr[--top2] = data;
    }

    int pop1(){
        if(top1 == -1) return -1;

        int data = arr[top1--];
        return data;
    }

    int pop2(){
        if(top2 == n) return -1;

        int data = arr[top2++];
        return data;
    }
};
int main(){
    
    return 0;
}