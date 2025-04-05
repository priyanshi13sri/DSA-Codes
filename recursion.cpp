//Basic Recursion Problems

//Print Name N times.
#include<iostream>
using namespace std;

void f(int i,int n){
    if(i>n)
    return;
    cout<<"Priyanshi"<<endl;
    f(i+1,n);
  
}

int main(){

   int n;
   cin>>n;
   f(1,n);

    return 0;
}
//Time Complexity-0(n)
//Space Complexity-0(n)