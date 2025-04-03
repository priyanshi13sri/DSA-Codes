            //KADANE'S ALGORITHM

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> nums;
    int currSum=0, maxSum=INT_MIN;
    nums={-2,1,-3,4,-1,2,1,-5,4};
    for(int val:nums){
        currSum=currSum+val;
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum;
    
    return 0;
}