#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int temp;
    for(int i=0;i<size/2;i++){
          temp=arr[i];
          arr[i]=arr[size-i-1];
          arr[size-i-1]=temp;
    }
}

int main(){
     
    int arr[]={5,8,6,3,9,7};
     reverse(arr,6);
     for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
     }

    return 0;
}