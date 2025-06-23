#include <iostream>   // ✅ Missing header for cout, endl
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sz = nums.size();
        for (int i = 0; i < sz; i++) {
            for (int j = i + 1; j < sz; j++) {
                if (nums[i] + nums[j] == target) {
                    return { i, j };
                }
            }
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    cout << "Output: " << result[0] << ", " << result[1] << endl;

    return 0;
}
