#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        //sort
        vector<int>sort(nums.begin(),nums.end());

        //freq cout 
        int freq = 1,ans = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                freq++;
            }
            else{
                freq =1;
                ans =nums[i];   
            }
            if(freq>n/2){
                return ans;
            }
        }
        return ans;
    }
};

int main(){
   Solution sol;
    int ans;
   vector<int>nums ={2,2,1,1,1,2,2};
   
   int result = sol.majorityElement(nums);

   cout<< "Majority Element:" << result << endl;
 
return 0;

}