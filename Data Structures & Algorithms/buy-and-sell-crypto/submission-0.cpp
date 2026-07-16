class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
         int res = INT_MAX;
        for (int i =0;i<prices.size();i++)
        {
            res = min(res, prices[i]);
            maxprofit = max(maxprofit,prices[i]-res);
        }
        return maxprofit;
    }
};
