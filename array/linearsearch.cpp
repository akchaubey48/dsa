#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    bool isfound =0;
    for(int i=0;i<size;i++){
         if(key== arr[i]){
            isfound= 1;
         }
    }
    return isfound;
}
int main(){
     
    int arr[8] = {1,3,2,4,5,7,6,8};
    if(search(arr,8,5)){
        cout<<" key is present in the arrray"<< endl;
    }else{
        cout<< "key is not present in array"<< endl;
    }
}