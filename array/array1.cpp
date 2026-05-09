#include<iostream>
using namespace std;

void takingValue(int arr[],int size){
    cout<<" enter the value";
      for(int i =0;i<size;i++){
        cin>> arr[i];
      }
}

void printingValue(int arr[], int size){
    for(int i=0;i <size; i++){
       cout<< arr[i]<< endl;
    }
}



int sumOfArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum= sum+ arr[i];
    }

    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<< " "<< endl;
    // }

    // int newarr[5];
    // takingValue(newarr,5);
    // // printingValue(newarr,5);


    // max min of array


    // int max= newarr[0];
    // int min = newarr[0];
    // for(int i =0;i<5;i++){
    //     if(max<newarr[i]){
    //         max= newarr[i];
    //     }
    //     if(min > newarr[i]){
    //          min= newarr[i];
    //     }
    // }

    // cout<< " max in array is "<< max<< endl;
    // cout<<"min in array is "<< min<< endl;

  // sum of elemnt of array
  int sum= sumOfArray(arr,5);
  cout<< " sum of element of array " << sum<< endl;

}