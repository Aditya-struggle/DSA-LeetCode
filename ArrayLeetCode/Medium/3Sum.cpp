#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
        vector<int> threeSum(vector<int>& nums) {
        int sz = nums.size();
        int target = 0;
        vector<int>ans;
        for (int i = 0; i < sz; i++) {
            for (int j = i+1; j < sz; j++) {
                for(int k = j+1 ; k < sz ; k++){
                    if( i !=j && i !=k && j !=k){ 
                      if (nums[i] + nums[j] + nums[k] == target) {
                       return {nums[i],nums[j],nums[k]};
                        
                }}
            }}
        }
        return { };
    }
};

int main() {
    Solution sol;
    vector<int>nums = {2,2,1,0,-1,-4};
    int target = 0;

   vector<int>result = sol.threeSum(nums);

    cout << result[0] << ", " << result[1] << "," << result[2] << endl;

    return 0;
}