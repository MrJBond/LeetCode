class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<int> res(2,0);

        for(int i = 0; i<nums.size(); i++){

            // Find the target element
            if(i != nums.size() - 1)
                if(nums[i] == nums[i+1]){
                    res[0] = nums[i];
                    break;
                }
        }

        // Find needed element
        int countSumEls = 0;
        int n = nums.size();

        // From 1 to n
        for(int i = 1; i<=n; i++){
            countSumEls+=i;
        }

        // Actual sum
        int countSumNums = 0;
        for(int i = 0; i<nums.size(); i++){
            countSumNums += nums[i];
        }
        // Sum - actual sum + repeated el
        res[1] = countSumEls - countSumNums + res[0];
        return res;
    }
};