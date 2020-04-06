class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, temporaryProfit = -99999;
        for(int price : prices) {
            temporaryProfit = max(temporaryProfit, profit - price);
            profit = max(profit, temporaryProfit + price);
            }
        
        return profit;
    }
};