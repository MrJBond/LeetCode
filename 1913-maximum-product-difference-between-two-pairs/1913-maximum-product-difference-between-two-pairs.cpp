class Solution {
public:

    // First solution ( O(n*log n) )
   /* int maxProductDifference(vector<int>& nums) {
        if(nums.size() < 4){
            return 0;
        }

        sort(nums.begin(), nums.end());

        return nums[nums.size()-1]*nums[nums.size()-2] - nums[0]*nums[1];

    }*/

    // Second ( O(n) )
    int maxProductDifference(vector<int>& nums) {

        if(nums.size() < 4){
            return 0;
        }

        int max = INT_MIN;
        int secondMax = INT_MIN;
        int min = INT_MAX;
        int secondMin = INT_MAX;

        int indexMax = -1;
        int indexMin = -1;

        for(int i = 0; i<nums.size(); i++){

            // Remember the indexes not to take the first max (min) 
            // number when looking for the second max (min)
            if(nums[i] >= max){
                max = nums[i];
                indexMax = i;
            }
            if(nums[i] <= min){
                min = nums[i];
                indexMin = i;
            }
        }
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] >= secondMax && i != indexMax){
                secondMax = nums[i];
            }
            if(nums[i] <= secondMin && i != indexMin){
                secondMin = nums[i];
            }
        }
        return max*secondMax - min*secondMin;
    }
};