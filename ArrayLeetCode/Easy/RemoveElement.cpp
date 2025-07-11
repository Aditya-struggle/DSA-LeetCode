// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     int RemoveElement(vector<int>& nums, int target) {
//         int sz = nums.size();
//         for(int i=0;i<sz ; i++){
//             if( nums[i]== target){
//                 nums.erase(nums.begin()+nums[i]);
//                 break;
//             }
            
//         }
        
//         //Remaining Elements 
//         cout << "Remaining Elements:";
//         for(int val : nums){
//             cout << val << " ";
//         }
//         cout << endl;

        
//         return nums.size(); 
//     }
// };

// int main(){
//      Solution sol;

//     int n;
//     int t;
//     cout << "Enter Number:" ;
//     cin >> n;
     

//     vector<int> nums(n);
   
//     cout << "Enter" << n << "Number:";
//     for(int i =0;i<n;i++){
//         cin >> nums[i];
//     }
//     cout << "Enter Target Number:" ;
//         cin >> t;

//     int result = sol.RemoveElement(nums, t);

//     cout << "Total Numbers :" << result << endl;
//    return 0;

// }


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int RemoveElement(vector<int>& nums, int target) {
        int sz = nums.size();
        int index = 0;
        for(int i =0;i<sz;i++){
            if(nums[i] != target){
                nums[index] = nums[i];
                index++;
            }
        }
        for(int i =0;i<index;i++){
            cout << nums[i] << " ";
        }
        cout << endl;
       return index;
    }
};

int main(){
     Solution sol;

    int n;
    int t;
    cout << "Enter Number:" ;
    cin >> n;
     

    vector<int> nums(n);
   
    cout << "Enter" << n << "Number:";
    for(int i =0;i<n;i++){
        cin >> nums[i];
    }
    cout << "Enter Target Number:" ;
        cin >> t;

    int result = sol.RemoveElement(nums, t);
    
    cout << "Total Numbers after removal :" << result << endl;
    
   return 0;

}