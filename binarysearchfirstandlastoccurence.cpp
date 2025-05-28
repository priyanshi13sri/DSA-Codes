#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){

    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){

        if(arr[mid]==key){
            ans=mid;
            e=mid-1;//left most occurence chahiye isiliye end ko mid-1 kiye hain
        }
        else if(key>arr[mid]){//right me jaao
             s=mid+1;
        }
        else if(key<arr[mid]){//left me jaao
             e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int LastOcc(int arr[],int n,int key){

    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){

        if(arr[mid]==key){
            ans=mid;
            s=mid+1;//right most occurence chahiye isiliye end ko mid-1 kiye hain
        }
        else if(key>arr[mid]){//right me jaao
             s=mid+1;
        }
        else if(key<arr[mid]){//left me jaao
             e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}



int main(){
    
    int even[11]={1,2,3,3,3,3,3,3,3,3,5};
    int first=firstOcc(even,11,3);
    int last=LastOcc(even,11,3);
    int TotalOcc=(last-first)+1;
    cout<<"First Occurence of 3 is at index: "<<first<<endl;
    cout<<"Last Occurence of 3 is at index: "<<last<<endl;
    cout<<"Total Occurence of 3: "<<TotalOcc<<endl;
    return 0;
}