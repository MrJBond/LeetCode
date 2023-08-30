class Solution {
public:
// Bubble sort
    void sortColors(vector<int>& nums) {
        int temp;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] > nums[j]){
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
    // choice sort

    /*void sortColors(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            int min_index = i;
            for(int j = i+1; j<nums.size(); j++){
                if(nums[min_index] > nums[j]){
                    min_index = j;
                }
            }
            if(min_index != i){
                int temp = nums[min_index];
                nums[min_index] = nums[i];
                nums[i] = temp;
            }
        }
    }*/

    // O(n)
    
    /*void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == 0){
                count0++;
            }
            else if(nums[i] == 1){
                count1++;
            }
            else{
                count2++;
            }
        }
    
        int j = 0;
        while(count0 != 0){
            nums[j] = 0;
            count0--;
            j++;
        }
        while(count1 != 0){
            nums[j] = 1;
            count1--;
            j++;
        }
        while(count2 != 0){
            nums[j] = 2;
            count2--;
            j++;
        }
    }*/
};