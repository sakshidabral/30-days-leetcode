class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int mini=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            int d=prices[i]-mini;
            profit=max(profit,d);
            mini=min(prices[i],mini);
        }
        return profit;
    }
};