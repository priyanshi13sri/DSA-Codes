#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    
    }
    return 0;
}
int main(){
    int arr[]={5, 7, 2, -5, 10, 43, 8, 9, 0, -8};
    cout<<"Enter the element to search for: "<<endl;
    int key;
    cin>>key;

    bool found=search(arr,10,key); 


    if(found){
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"Key is absent "<<endl;
    }
}