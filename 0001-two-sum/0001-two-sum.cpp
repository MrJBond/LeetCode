class Solution {
public:

    // brute force
    
   /* vector<int> twoSum(vector<int>& nums, int target) {
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
    }*/
    
    // using unordered_map
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;
        
        vector<int> res;

        for(int i=0; i<nums.size(); i++){
            
            // find second number
            auto it = mp.find(target - nums[i]); 
            
            if(it != mp.end()){
                
                // number was found
                res.push_back(i);
                res.push_back(it->second);
            }
            
            // write to the map  
            mp[nums[i]] = i;
        }
        return res;
    }
    
    
};