class Solution {
public:
    
    // first solution
    
/*int majorityElement(vector<int>& nums){
    int el = nums[0];
    int count = 0;
    for(int i = 0; i<nums.size(); i++){
        if(count == 0) 
            el = nums[i];
        count+=(el==nums[i])?1:-1;
    }
    return el;
}*/
    
    // second solution
    
int majorityElement(vector<int>& nums){
    
    unordered_map<int,int> mp;
    
    for(int i=0; i<nums.size(); i++){
        mp[nums[i]]++;
    }
    
    for(auto el : mp){
        if(el.second > nums.size()/2){
            return el.first;
        }
    }
    return -1;
}    
 
};