#include<iostream>
#include<queue>
using namespace std;


int main(){
    //max heap
    priority_queue<int> pt;
    pt.push(4);
    pt.push(3);
    pt.push(5);

    cout<< pt.top()<< endl;
    pt.pop();
    cout<< pt.size();

    //min heap
    priority_queue<int, vector<int> , greater<int> > miheap;
  // all method of max heap are allowed
  

}