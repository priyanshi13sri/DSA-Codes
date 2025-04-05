//Print from N to 1.

#include<iostream>
using namespace std;

void f(int n, int i){
    if(n<i)
    return;
    f(n,i+1);
    cout<<i<<endl;
}
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    f(n,1);
    return 0;
}