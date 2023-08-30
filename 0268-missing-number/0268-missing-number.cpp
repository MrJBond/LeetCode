class Solution {
    int res = 0;
public:

    // first

     /*bool isPresent(vector<int>& nums, int n){
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == n)
                return true;
        }
        return false;
    }
    int missingNumber(vector<int>& nums){
        for(int i = 0; i<=nums.size(); i++){
            if(!isPresent(nums, i)){
                return i;
            }
        }
        return -1;
    }*/

    // second
    int missingNumber(vector<int>& nums){
        sort(nums.begin(), nums.end());
        int first = 0;
        int last = nums.size();
        while(first < last){
            int mid = (first + last)/2;

            if(nums[mid] > mid){
                last = mid;
            }
            else{
                first = mid+1;
            }
        }
        return first;
    }
};