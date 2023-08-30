class Solution {
public:
// TLE
    /*int maxProfit(vector<int>& prices) {
        int max = 0;
        for(int i=0; i<prices.size(); i++){
            for(int j=i+1; j<prices.size(); j++){
                if(prices[j] - prices[i] > max){
                    max = prices[j] - prices[i];
                }
            }
        }
        return max;
    }*/
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int maxP = 0;
        for(int i=0; i<prices.size(); i++){
            buy = min(buy, prices[i]);
            maxP = max(maxP, prices[i]-buy);
        } 
        return maxP;
    }
};