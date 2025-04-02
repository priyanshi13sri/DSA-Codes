#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> vec1;
   // vector<int> vec={1,2,3};
   // vector<int> vec(4,0);
  vector<char> vec={'a','b','c','d','e'};
  cout<<"size ="<< vec.size() <<endl;
  vec.push_back('g');
  cout<<"after push back size = "<< vec.size()<<endl;
  vec.pop_back();
    cout<< vec.front() <<endl;
    cout<< vec.back() <<endl; 
     cout<<vec.at(1)<<endl;
     vec.push_back('r');
     vec.push_back('t');
     cout<< vec.capacity()<<endl; 
     //for(char val:vec){ //for each loop
      //  cout<<val<<endl;
    //}
   // cout<<vec[0]<<endl;
   //  cout<<vec[1]<<endl;
   //  cout<<vec[2]<<endl;
   //  cout<<vec[3]<<endl; 
     return 0;
}

/*  VECTOR FUNCTIONS  ---->
                *size
                *push_back
                *pop_back
                *front
                *back
                *at
*/