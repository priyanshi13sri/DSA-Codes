#include<iostream>
using namespace std;

int hashing(int n,int arr[],int size){
    int count =0;
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            count=count+1;
        }
    }
    return count;
}
int main(){

    int s;
    cout<<"Input array size:";
    cin>>s;
    int arr[s];
    cout<<"Input array numbers:";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    int number;
    cout<<"Input number to check no.of times:";
    cin>>number;
    cout<<"No. of times "<<number<<" in array is: "<<hashing(number,arr,s)<<endl;

    return 0;
}