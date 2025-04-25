#include<iostream>
#include<math.h>
using namespace std;

int main(){
   int n;
   cin>>n;

  int ans=0;
   int i=0;
   while(n!=0){
    int bit=n&1;
    int onecomp=(~bit);
    int ans=onecomp +1;
   }

   cout<<"Answer is 2's complement"<<ans;
    return 0;
}