#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int n;
    cin>> n;

      if(n==0){
            return 1;
        }
        int m =n;
        int mask =0;
        while(m!=0){
            mask=( mask << 1) |1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        return ans;
}



// for a limit of integer it will work 

// int main(){
//     int n;
//     cin>> n;

    
//     int ans = 0;
//     int place = 1;   

//     while (n != 0) {
//         int bit = n & 1;
//         if(bit == 1){
//              ans = (0 * place) + ans;
//         }else{
//              ans = (1 * place) + ans;
//         }
       
//         place *= 10;
//         n = n >> 1;
//     }


//       int finalans=0;
//    int i=0; 
//     while(ans!=0){
//        int bit = ans%10;
//         finalans =pow(2,i)*bit + finalans;
       
//        ans=ans/10;
//        i++;
//     }
//  cout<< finalans;

//  return 0;
// }