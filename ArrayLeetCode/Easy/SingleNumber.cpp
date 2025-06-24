#include <iostream>  
#include<vector> 
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
     int ans =0;

     for(int val:nums){
        ans ^= val;
     } 
     return ans;  
    }
};

int main(){
     Solution sol;

    int n;
    cout << "Enter Number :";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter" << " " << n << " " << "Number";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }   

    int result = sol.singleNumber(nums);

    cout << "Single Number : " << result  << endl;
    return 0;
}