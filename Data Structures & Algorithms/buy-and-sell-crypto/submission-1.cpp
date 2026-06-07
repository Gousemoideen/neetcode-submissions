class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(),mp = 0,best=prices[0];

        for(int i=0;i<n;i++) {
            if(prices[i]>best) {
                mp = max(mp,prices[i]-best);
            }
            best = min(best,prices[i]);
        }

        return mp;
    }
};
