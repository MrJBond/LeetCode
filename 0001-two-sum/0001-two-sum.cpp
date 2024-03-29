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
    
   /* vector<int> twoSum(vector<int>& nums, int target) {
        
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
    }*/
    

    // using sorting (merge sort)

void merge(vector<int> v1, vector<int> v2, vector<int>& nums){
    int j = 0;
    int k = 0;
    int i = 0;

    while (j < v1.size() && k < v2.size()) {
        if (v1[j] <= v2[k]) {
            nums[i] = v1[j];
            j++;
        } else {
            nums[i] = v2[k];
            k++;
        }
        i++;
    }
    while (j < v1.size()) {
        nums[i] = v1[j];
        j++;
        i++;
    }
    while (k < v2.size()) {
        nums[i] = v2[k];
        k++;
        i++;
    }
}
    void mergeSort(vector<int>& nums){
        
            if (nums.size() <= 1) {
                 return; 
            }
        
        int mid = nums.size()/2;

        vector<int> half1(nums.size()/2, -1); 
        vector<int> half2(nums.size() - nums.size()/2, -1);

        for(int i = 0; i<nums.size(); i++){
            if(i < mid){
                half1[i] = nums[i];
            }else{
                half2[i - mid] = nums[i];
            }
        }
        mergeSort(half1);
        mergeSort(half2);
        merge(half1, half2, nums);
        
    }
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> memorizeNums = nums; // to remember indexes

        vector<int> resultNums(2, -1);

        mergeSort(nums);

        int first = 0;
        int last = nums.size() - 1;

        while(first <= last){
            
            if(nums[first] + nums[last] > target){
                last--;
            }
            if(nums[first] + nums[last] < target){
                first++;
            }
            if(nums[first] + nums[last] == target){
                resultNums[0] = nums[first];
                resultNums[1] = nums[last];
                break;
            }
        }
        vector<int> result(2, -1);
        
        // Get idexes
        for(int i = 0; i<memorizeNums.size(); i++){

            if(memorizeNums[i] == resultNums[0]){
                if(result[0] == -1 && result[1] != i) // not to use one index twice
                    result[0] = i;
            }
            if(memorizeNums[i] == resultNums[1]){

                if(result[1] == -1 && result[0] != i) // not to use one index twice
                    result[1] = i;
            }
        }
        return result;
    }
    
};