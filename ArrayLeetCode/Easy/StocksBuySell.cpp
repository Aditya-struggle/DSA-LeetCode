#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
       int maxProfit(vector<int>& prices){
          int maxprofit = 0;
          int bestBuy = prices[0];

          for(int i=1;i<prices.size();i++){
            if(prices[i]>bestBuy){
                maxprofit = max(maxprofit,prices[i]-bestBuy);
            }
            bestBuy = min(bestBuy,prices[i]);

          }

         return maxprofit;

       }

};


int main(){
       Solution sol;
      
       vector<int>prices = {7,1,5,3,6,4};
     
       int result = sol.maxProfit(prices);

       cout << "Maxprofit:" << result << endl;


    return 0;
}
