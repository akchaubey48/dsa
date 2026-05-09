#include<iostream>
using namespace std;


// reverse of array
void revOfArray(int arr[],int s){
    for(int i=0;i<=s/2;i++){
        int temp= arr[s-1-i];
        arr[s-1-i]= arr[i];
        arr[i]= temp;
    }
}

// alternate reverse of array
void alterReverse(int arr[],int size){  
        for(int i =0;i<size;i+=2){
          if(i+1< size){
            swap(arr[i],arr[i+1]);
          }
          }      
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    revOfArray(arr,10);
    // for(int i=0;i< 10;i++){
    //     cout<<arr[i]<< endl;
    // }


    int arr1[5]={1,2,3,4,5};
   
    alterReverse(arr1,5);
     for(int i=0;i< 5;i++){
        cout<<arr1[i]<< endl;
    }

}