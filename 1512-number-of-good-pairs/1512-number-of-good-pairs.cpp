class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       unordered_map<int, int> mp;
       for(int i = 0; i<nums.size(); ++i){
          mp[nums[i]]++;
       }   
       int res = 0;
       for(const auto& p : mp){
        if(p.second != 1)
            res += ((p.second - 1)*p.second)/2; // n!/(2*(n-2)!) => n!/(k!(n-k)!)
       }
       return res;
    }
};