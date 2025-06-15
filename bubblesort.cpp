#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    bool swapped = false;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        break;
    }
}
int main(){
    int arr[]={10,1,7,6,14,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);
    cout<<"Sorted Array ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}