#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
        int ans=1;
        for(int i=0;i<=30;i++){
            if(ans==n){
                return true;
            }
            if(ans<INT_MAX/2)
             ans=ans * 2;
        }
        return false;
}
int main(){
int n;
cin>>n;
cout<<"Integer n is power of true or not "<<isPowerOfTwo(n);
    return 0;
}