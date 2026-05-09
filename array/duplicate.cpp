#include<iostream>
using namespace std;

int duplicateelement(int arr[],int n){
    // using sum of all
    
      int  sum = (n*(n+1))/2;

      int dsum=0;
      for(int i=0; i<n;i++){
        dsum+=arr[0];
      }

  int ans = n-(sum- dsum);
      return ans;
}


int dupElement(int arr[],int n){
    
   int ans=0;
     
      
     for(int i=0; i< n; i++){
        ans = ans^arr[i];
     }
     for(int i=1; i< n; i++){
        ans= ans^i;
     } 
     return ans;
}

int main(){
  int arr[5]= {1,2,3,4,3};
  int nas =dupElement(arr,5);
  cout<<nas<< endl;
}