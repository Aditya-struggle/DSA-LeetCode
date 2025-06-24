#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n = 6;
  int arr[6] = {-3,6,-9,6,-4,2};
    
  int maxSum = INT8_MIN;

   for(int i=0; i<n; i++){
        int currSum =0;
    for(int j=i; j<n; j++){
        currSum += arr[j];
        maxSum = max(currSum,maxSum);
      
    }
        
   }
    
   cout << "max subbarray sum =" << maxSum << endl;

    return 0;
}  