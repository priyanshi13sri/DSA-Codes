#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
   string S="011101";

   vector<int> a;
   
   
   for(int i=1;i<=S.length()-1;i++){
    int sum1=0;
    int sum2=0;
    //0's
    for(int j=0;j<i;j++){
        if(S[j]=='0'){
            sum1++;
        }
    }
    //1'S
    for(int j = i; j<S.length();j++){
        if(S[j]=='1'){
            sum2++;
        }
    }
    a.push_back(sum1+sum2);
   }
   sort(a.begin(), a.end());
   cout<<a[a.size()-1];
    return 0;
}