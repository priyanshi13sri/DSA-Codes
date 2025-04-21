#include<iostream>
using namespace std;

int FindUniqueElement(int arr[],int n){
    int ans=0;
  /*XOR is used to find unique element because in XOR if we have to same input it gives false output(0) and if different input it gives true output(1).
     1^1=false(0)
     1^0=true(1)  */
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[7]={2,5,7,5,7,2};
    FindUniqueElement(arr,7);
    return 0;
}