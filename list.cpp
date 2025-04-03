#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){

    list<int> li;
    li.emplace_back(1);
    li.push_back(2);
    li.push_front(3);
    li.push_front(5);
    for(int val:li){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}