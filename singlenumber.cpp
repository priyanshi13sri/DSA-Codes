#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    vector<int> nums;
    nums={2,2,1,1,7,6,6};
    int ans=0;
    for(int val: nums){
        ans=ans^val;
    }
    cout<<ans<<endl;
    
    return 0;
}