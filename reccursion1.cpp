//Print linerally from 1 to n.

#include<iostream>
using namespace std;

void f(int i,int n){
    if(i>n)
    return;
    cout<<i<<endl;
    f(i+1,n);
}
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    f(1,n);
    return 0;
}