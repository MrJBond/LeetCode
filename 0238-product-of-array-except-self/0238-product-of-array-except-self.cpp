class Solution {
public:
 vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        
        int total = 1;
        
        // find total
        for(int i=0; i<nums.size(); i++){
            total *= nums[i];
        }
        
        vector<int> indexes0;
        vector<int> res0;
        
        // find products 
        for(int i = 0;i<nums.size(); i++){
            if(nums[i] != 0){
                res.push_back(total/nums[i]);
            }
            else{
                // memorise indexes of zeros
                indexes0.push_back(i);
            }
        }
        
        if(indexes0.size() == 0){
            return res;
        }
        else if(indexes0.size() == 1){
            int index = indexes0[0];
            nums.erase(nums.begin() + index);
            
            int total = 1;
            for(int i =0; i<nums.size(); i++){
                total *= nums[i];
            }
            res.insert(res.begin() + index, total);
        }
        else{
            for(int i=0; i<indexes0.size(); i++){
                res.insert(res.begin() + indexes0[i], 0);
            }
        }
        
        return res;
 }
};