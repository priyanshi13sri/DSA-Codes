#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){
     for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex])
        minIndex=j;
    }
    swap(arr[minIndex],arr[i]);
  }
}
int main(){
    int arr[]={29,10,14,37,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);

    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}