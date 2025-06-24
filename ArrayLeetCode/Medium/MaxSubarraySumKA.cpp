//kadane's Algorithm
#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n = 6;
  int arr[6] = {-3-4,5,4,-1,7,-8};
    
  int maxSum = INT8_MIN;
  int currSum = 0;
   for(int i=0; i<n; i++){
   
       currSum += arr[i];
        maxSum = max(currSum,maxSum);
      if(currSum<0){
        currSum =0;
      }
    
        
   }
    
   cout << "max subbarray sum =" << maxSum << endl;

    return 0;
}  