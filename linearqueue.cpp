#include<iostream>
using namespace std;

void push(int x){
    while(q1.size()>0){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push();
    while(q2.size()>0)
    {
        q1.push(q1.front())
        q1.pop();
    }
}
int top(){
    return q1.front();
}

int pop(){
    int x=q1.front();
    q1.pop();
    return x;
}
int main(){

    return 0;
}
