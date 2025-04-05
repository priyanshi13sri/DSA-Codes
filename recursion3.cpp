//Print Linearly from 1 to N.(By Backtracking)

#include<iostream>
using namespace std;

void f(int i,int n){
    if(i<1)
    return;
    f(i-1,n);
    cout<<i<<endl;

}
int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   f(n,n);
    return 0;
}