class Solution {
public:

    // brute force
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;
        for(auto i = 0; i != nums.size(); i++){
            for(auto j = i+1; j != nums.size(); j++){
              if(nums[i]+nums[j] == target){
                  vec.push_back(i);
                  vec.push_back(j);
              }  
        }
    }
    return vec;
    }
    
    
};