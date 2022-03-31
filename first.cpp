
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimal=INT_MAX,maxprofit=0,currentprofit;
        for(auto x:prices)
        {
            if(minimal>x)
            {
                minimal=x;
               
            }
             currentprofit=x-minimal;
                if(currentprofit>maxprofit)
                    maxprofit=currentprofit;
        }
        return maxprofit;
    }
};