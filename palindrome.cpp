// Check if a string is palindrome.

#include<iostream>
using namespace std;
 bool f(int i,string &s){
    if(i>=s.size()/2)return true;
    if(s[i] !=s[s.size()-i-1]) return false;
    return f(i+1,s);
 }
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    
    cout<<(f(0,s) ?"Palindrome" : "Not Palindrome")<<endl;
    return 0;
}