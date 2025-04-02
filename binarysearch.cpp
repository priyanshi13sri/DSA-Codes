#include<iostream>
using namespace std;


int binarySearch(int arr[],int size,int key){
    int low=0;int high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
             low=mid+1;
        }
        else{
             high=mid-1;
        }
       
    }
    return -1;
}
int main(){

    int arr[]={4,8,9,13,18,21,25};
    
    cout<< "found at " << binarySearch(arr,7,21);
    return 0;
}