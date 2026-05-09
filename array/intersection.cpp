#include<iostream>
using namespace std;


// algo 1 brot force soln
vector<int>  intersectionelement(int arr[],int n,int arr2[],int m){
  vector<int> ans;
// arrays are in sorted form and range in < 0

  for(int i=0;i <n;i++){
    for(int j =0; j<m; j++){
        if(arr[i] < arr[j]){
            break;
        }
        if(arr[i]== arr2[j]){
            ans.push_back(arr[i]);
            arr2[j]= -1111; // using a random ariable
            break;
        }
    }
  }
  return ans;
}

// optmize soln
vector<int>  intersectionelement(int arr[],int n,int arr2[],int m){
  vector<int> ans;

  int i=0,j=0;
  while(i<n && j<m){
     
     if(arr[i]== arr2[j]){
            ans.push_back(arr[i]);
            i++;
            j++;
     } else if(arr[i] < arr2[j]){
             i++;
     } else{
        j++;
     }
  }
  return ans;
}
int main(){

}