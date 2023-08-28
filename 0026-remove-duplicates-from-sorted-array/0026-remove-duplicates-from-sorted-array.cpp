class Solution {
public:

    // first solution using unique()

    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }

// second solution using set

 /*int removeDuplicates(vector<int>& nums) {
        
        set<int> s;
        
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        int i = 0;
        for(auto it = s.begin(); i<s.size(); i++, it++){
            nums[i] = *it;
        }
        
        nums.erase(nums.begin()+s.size(),nums.end());
        
        return nums.size();
    }*/

};