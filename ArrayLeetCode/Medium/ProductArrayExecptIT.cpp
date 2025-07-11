//Used optimal Approach to reduced  time complexity to O(3n) = O(n)
// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution{
// public:
//      vector<int> productExceptSelf(vector<int>& nums){
//          int n = nums.size();
//          vector<int> ans(n,1); 
//           vector<int> prefix(n,1);
//            vector<int> suffix(n,1);
//           prefix[0] = 1;
//         for(int i=1;i<n;i++){
//              prefix[i] = prefix[i-1]*nums[i-1];
            
//         }
//         suffix[n-1]=1;
//          for(int i =n-2;i>=0;i--){
//             suffix[i] = suffix[i+1]*nums[i+1];
//          }
//         for(int i=0;i<n;i++){
//             ans[i] = prefix[i]*suffix[i];
//         }
//         return ans;
//      }
// };

// int main(){
//     Solution sol;

//     vector<int>nums ={1,2,3,4};
    

//     vector<int> result = sol.productExceptSelf(nums);
      
//     for(int val:result){
//         cout << val << ",";
//     }
   




//     return 0;
// }

//Using another optimal Approach to reduced space  complexity to O(1)

#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
     vector<int> productExceptSelf(vector<int>& nums){
         int n = nums.size();
         vector<int> ans(n,1); 
          
           
          
        for(int i=1;i<n;i++){
             ans[i] = ans[i-1]*nums[i-1];
            
        }
        int suffix =1;
         for(int i =n-2;i>=0;i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
         }
        
        
        return ans;
     }
};

int main(){
    Solution sol;

    vector<int>nums ={1,2,3,4};
    

    vector<int> result = sol.productExceptSelf(nums);
      
    for(int val:result){
        cout << val << " ";
    }
   




    return 0;
}



