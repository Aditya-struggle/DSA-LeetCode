#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int maxArea(vector<int>& height){
        int mostWater = 0;
        int n = height.size();
        int lp = 0,rp =n-1;
        while(lp<rp){
            int w = rp - lp;
            int h = min(height[lp],height[rp]);
            int currWater = w*h;
            mostWater = max(mostWater,currWater);

            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }
    return  mostWater;
    }


};

int main(){
    Solution sol;

    vector<int> height ={1,8,6,2,5,4,8,3,7};

    int result = sol.maxArea(height);
    cout<< "Container with Most Water :" << result << endl;

    return 0;
}