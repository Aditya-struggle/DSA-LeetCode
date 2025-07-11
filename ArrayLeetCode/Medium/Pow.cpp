#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0) return 0;
        if(n == 0) return 1;
        if(x == 1) return 1;
        if(x == -1 && n%2 == 0) return 1;
        if(x == -1 && n%2 != 0) return -1;
        long N = n;
        if(N < 0){
            x = 1/x;
            N = -N;
        }
       double ans = 1;
        while(N > 0){
            if(N%2 == 1){
               ans *= x;
            }
            x *= x;
            N /= 2;
        }

        return ans;
        
    }
};
int main(){
   Solution sol;
   
  double x = 3;
  int n = 5;
   
   double result = sol.myPow( x,n);
   cout<< "PoW :" << result << endl;
 
return 0;

}



