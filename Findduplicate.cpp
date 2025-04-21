#include<iostream>
#include<vector>
using namespace std;

int FindDuplicate(vector<int>&arr){
    int ans=0;
    // XOR ing all array element
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    // XOR 
    for(int i=1;i<arr.size();i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
   vector<int> v ={1,3,4,4,2};
   int dup= FindDuplicate(v);
   cout<<"Duplicate: "<<dup<<endl;
    return 0;
}