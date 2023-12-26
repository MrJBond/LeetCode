class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int first = 0;
        int second = nums.size()-1;
        
        while(first <= second){
        	
        	int mid = (first + second)/2;
            
            if(nums[mid] == target){
               return mid;
            }
            
            if(target < nums[mid]){
              second = mid-1;
            }
            if(target > nums[mid]){
               first = mid+1;
            }
        }
        // The index of the missing number is in the first pointer
        return first;
    }

};