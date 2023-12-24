class Solution {
public:
vector<int> getConcatenation(vector<int>& nums) {
     vector<int> res(nums.size()*2, 0);
     for(int i = 0; i<nums.size()*2; i++){
     	if(i >= nums.size()){
     		res[i] = nums[i-nums.size()];
     	}
     	else{
     		res[i] = nums[i];
		}     	
     }
     return res;
 }
};