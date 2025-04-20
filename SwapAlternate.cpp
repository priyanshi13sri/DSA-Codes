#include<iostream>
using namespace std;

void Swap(int arr[],int n){

 for(int i=0;i<n;i=i+2){
    if(i+1<n)
    swap(arr[i],arr[i+1]);

  }
}

void PrintArray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={9,8,7,6,5,4};

    Swap(arr,5);
    Swap(brr,6);

    PrintArray(arr,5);
    PrintArray(brr,6);
    return 0;
}