class Solution {
public:

// 53/58 testcases

 /* bool contain(vector<int>& v, int n){
      for(int i = 0; i<v.size(); i++){
          if(v[i] == n)
            return true;
      }
      return false;
  }
void del(vector<int>& v, int n) {
    for(int i=0; i<v.size(); i++){
        if(v[i] == n){
            v.erase(v.begin()+i);
            break;
        }
    }
}
    int findDuplicate(vector<int>& nums) {
        int s = nums.size();
        for(int i = 1; i<=s-1; i++){
            if(contain(nums,i)){
                del(nums,i);
            }
        }

        return nums[0];
    }*/

    // brute force 
    // using map

    /*int findDuplicate(vector<int>& nums) {
        int max = nums.size()-1;

        unordered_map<int, bool> mp;
        int r;
        for(int i = 0; i<max+1; i++){
            if(mp.count(nums[i]) == 0){
                mp[nums[i]] = true;
            }
            else{
                r = nums[i];
            }
        }
        return r;
    }*/

    // count
    int findDuplicate(vector<int>& nums) {

        // fill with zeros
        vector<int> v(nums.size(), 0);

        for(int i =0; i<nums.size(); i++){

            // nums[i] = index
            v[nums[i]]++;
        }
        int r;
        for(int i = 0; i<v.size(); i++){

            // return index
            if(v[i] > 1){
                r = i;
            }
        }
        return r;
    }
};