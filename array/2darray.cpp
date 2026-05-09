#include<iostream>
using namespace std;


//  founding target
bool isPresent(int arr[][3],int target,int row ,int col){
    for(int i=0; i<row; i++){
       for(int j=0; j<3; j++){
        if(arr[i][j] == target) return 1;
       }
    }
    return 0;
}

// row wise sum

void  rowWiseSum(int arr[][3],int row){
    
    for(int i=0; i<row; i++){
        int sum=0;
       for(int j=0; j<3; j++){
           sum+=arr[i][j];
       }
       cout<< sum << " ";
       
    }
   
}

// largest row sum
void  largestrowWiseSum(int arr[][3],int row){
    int largest=0;
    int rowNumber=0;
    for(int i=0; i<row; i++){
        int sum=0;
       for(int j=0; j<3; j++){
           sum+=arr[i][j];
       }
      if(sum > largest) {
        largest= sum;
        rowNumber=i;
      }
       
    }
   cout<< " largest row sum is: " << largest<< endl;
   cout<< " row number is: "<< rowNumber<< endl;
   
}


int main(){

    int arr[3][3];
     cout << " enter the value "<< endl;

     // taking input rows wise

     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
     }
  // taking input colum wise

    //   for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin >> arr[j][i];
    //     }
    //  }
  

/*
    // printing array
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout <<  arr[i][j] << " ";
        }
     }
*/

  
/*
    searching for an element in array
     
     int target;
     cout<< " enter the target element "<< endl;
     cin >> target;

     if(isPresent(arr,target,3,3)) {
        cout<< " target is present ";
     } else{
        cout<< " not present ";
     }
     
*/

/*
      sum of row 
      rowWiseSum(arr,3);
      
*/
    
  largestrowWiseSum(arr,3);


    return 0;
}