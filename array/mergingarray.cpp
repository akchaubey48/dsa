#include<iostream>
using namespace std;

void merg(int arr1[], int n, int arr2[], int m,int arr3[]){
    int i=0,k=0,j=0;
    while(i<n && j< m){
        if(arr1[i] < arr2[j]){
            arr3[k++]= arr1[i++];
        }else{
            arr3[k++]= arr2[j++];
        }
    }

    // copy remaining element of arr1
    while(i< n){
        arr3[k++]= arr1[i++];
    }

    // copy remaining element of arr2
    while(j<m){
        arr3[k++]=arr2[j++];
    }
    
}

void print(int arr[], int a){
    for(int i=0;i<a;i++){
        cout<< arr[i]<< " ";
    }
}

int main(){
  
    int arr1[5]={1,3,4,6,7};
    int arr2[3]={2,5,8};

    int arr3[8]={0};

    merg(arr1,5,arr2,3,arr3);
    print(arr3,8);
}