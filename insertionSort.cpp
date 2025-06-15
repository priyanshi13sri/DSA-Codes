#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
       while(prev>=0 && arr[prev]>curr){
        arr[prev+1]=arr[prev];
        prev--;
       } 
       arr[prev+1]=curr;
    }
}
int main(){
    int arr[]={10,1,7,12,14,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    cout<<"Sorted Array ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
