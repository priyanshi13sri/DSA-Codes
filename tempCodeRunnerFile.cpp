#include<iostream>
using namespace std;

int main(){
/*  int a,b=1;
  a=10;
  if(++a)
   cout<<b;
  else
  cout<<++b;*/
 // int a=1,b=2;
  /*if(a-- >0&&++b>2){
    cout<<"Correct";
  }else{
    cout<<"Incorrect";
  }
  cout<< a<< " "<<b<<endl;*/
 // int n=3;
  //cout<<(25 *(++n));
  
 // int a=1;
 // int b=a++;
 // int c=++a;
 // cout<<"b is equal to: "<<b<<endl;
 // cout<<"c is equal to: "<<c;
 for(int i=0;i<=5;i++){
    for(int j=i;j<=5;j++){
        if(i+j==10){
            break;
        }
        cout<<i <<" "<<j <<endl;
    }
 
  return 0;
}
}