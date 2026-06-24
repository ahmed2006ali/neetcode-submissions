class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int left = 0;
        int right = 1;

        while(right<prices.size()){
            if(prices[right]<prices[left]){
                left=right;
            }
            int profit = prices[right] - prices[left];
            if(profit > maxProfit) maxProfit = profit;
            right++;
        }
        return maxProfit;
    }
};
