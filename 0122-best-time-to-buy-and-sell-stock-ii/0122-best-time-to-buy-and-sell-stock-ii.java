class Solution {
    public int maxProfit(int[] prices) {
        
        if(prices.length == 1 || prices.length == 0){
            return 0;
        }

        int sum = 0;
        for(int i=0; i+1<prices.length; i++){
            if(prices[i]<prices[i+1]){
                sum += prices[i+1]-prices[i];
            }
        }
        return sum;
    }
}