#include<iostream>
using namespace std;
#define max 10
int top=-1;
int start[max];
void push(int val){
    if(top==max-1){
        cout<<"Stack is full"<<endl;
    }else{
        top++;
        start[top]=val;
    }
}
void pop(){
    int t;
    if(top==-1){
        cout<<"Stack is empty."<<endl;
    }else{
        t=start[top];
        top--;
        cout<<"Deleted item:"<<t<<endl;
    }
}
    void display(){
        int i;
        if(top==-1){
            cout<<"Stack is empty"<<endl;;
        }else{
            for(int i=top;i>=0;i--){
                cout<<start[i]<<" ";
            }
        }
}
int main(){
    push(1);
    push(2);
    push(3);
    pop();
    pop();
    display();
    push(4);
    push(5);
   display();
    return 0;
}