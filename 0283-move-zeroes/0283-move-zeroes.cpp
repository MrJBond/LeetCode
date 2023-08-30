class Solution {
public:
void moveZeroes(vector<int>& nums) {

    // count 0s and delete them
    int count = 0;
    for(int i=nums.size()-1; i!=-1; i--){
        if(nums[i] == 0){
            count++;
            nums.erase(nums.begin()+i);
        }
    }
    for(int i = 0; i<count; i++){
        nums.push_back(0);
    }
}
};