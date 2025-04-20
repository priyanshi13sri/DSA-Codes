#include<iostream>
using namespace std;

int FindUniqueElement(int arr[],int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<"Element Found "<<endl;
    return ans;
}

int main(){
    int arr[7]={2,5,7,5,5,7,2};
    FindUniqueElement(arr,7);

    return 0;
}