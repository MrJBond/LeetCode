class Solution {
public:

    void sorter(vector<int> ar){
        int temp;
        for(int i=0; i<ar.size(); i++){
            for(int j = i+1; j<ar.size(); j++){
                if(ar[i]>ar[j]){
                    temp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = temp;
                }
            }
        }
    }
        bool containsDuplicate(vector<int>& nums) {
        //sorter(nums);
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }

};