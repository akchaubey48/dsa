#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<int, int> m;

    pair<int,int> p  = make_pair(1,6);
    m.insert(p);

    pair<int, int> q(2,5);
    m.insert(p);

    m[3]=12;
    

    cout<< m.size()<< endl;
  cout<<  m.count(2) << endl;

   cout<< m.erase(3) <<endl;
}