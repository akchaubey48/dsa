#include <bits/stdc++.h> 
vector<int> wavePrint1(vector<vector<int>> arr, int nRows, int mCols)
{   
    vector<int> ans;
    
      for(int i=0;i<mCols;i++){  
          if(i&1){
                for(int j=nRows -1; j>=0;j--){
                    ans.push_back(arr[j][i]);
                }
            }
           else {
               for(int j=0; j<nRows;j++){
                   ans.push_back(arr[j][i]);
               }
            }
        
       }

       return ans;
    
   
}


vector<int> wavePrint2(vector<vector<int>> arr, int nRows, int mCols)
{   

    vector<int> ans;
     int j=0;
      for(int i=0;i<mCols;i++){  
        if(j== nRows){
           for( j=nRows -1; j>=0;j--){
             ans.push_back(arr[j][i]);
           }
        }
           else {
             for( j=0; j<nRows;j++){
                  ans.push_back(arr[j][i]);
              }

            }
        
       }

       return ans;
    
   
}


int main(){

    vector<vector<int>> arr;
}
