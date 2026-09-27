class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int right_max = prices[n-1];
        int max_profit = 0;

        for(int i = n-2; i >= 0; i--){
            right_max = max(prices[i],right_max);
            max_profit = max(max_profit, right_max-prices[i]);
        }
        return max_profit;
    }
};
