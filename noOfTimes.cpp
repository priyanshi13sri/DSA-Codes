#include<iostream>
#include<vector>
using namespace std;
int NoOfTimes(int n,vector<int>arr){
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==n){
            count=count+1;
        }
    }
    return count;
}
int main(){
  int a;
  cout<<"Input array size:";
  cin>>a;
  vector<int>arr(a);
  cout<<"Input array numbers:";
  for(int i=0;i<a;i++){
    cin>>arr[i];
  }
  int num;
  cout<<"Input number to search: ";
  cin>>num;
  cout<<"Number of times "<<num<<" in array is:"<<NoOfTimes(num,arr)<<endl;
    return 0;
}
