class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=INT_MIN;
        int small=INT_MAX;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(prices[i]<small)
            small=prices[i];
            maxi=max(maxi,prices[i]-small);
        }
        return maxi;
    }
};
