class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  minPrice = INT_MAX;
        int maxpro = 0;

        for(int i = 0; i<prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxpro = max(maxpro, prices[i] - minPrice);
        }
        return maxpro;
    }
};