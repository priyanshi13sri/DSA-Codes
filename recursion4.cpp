//Print from N to 1.(By Backtracking)

#include<iostream>
using namespace std;
void f(int n,int i){
    if(i>n)
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