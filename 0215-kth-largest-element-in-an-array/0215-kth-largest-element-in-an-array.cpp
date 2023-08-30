class Solution {
public:
    // int maxEl(vector<int> v){
    //    int max = v[0];
    //    for(int i = 0; i<v.size(); i++){
      //      if(v[i] > max){
       //         max = v[i];
       //     }
     ///   }
      //  return max;
   // }
   // int maxElpos(vector<int> v){
   //     int pos = 0;
   //     for(int i = 0; i<v.size(); i++){
    //        if(v[i] == /*maxEl(v)*/ *std::max_element(v.begin(),v.end())){
     //           pos = i; 
      //      }
   //    }
    //    return pos;
   // }



// 37/40 testcases, using vector

   /* int findKthLargest(vector<int>& nums, int k) {
        //vector<int> v = nums;
        while(k != 1){
            //int l = maxElpos(v);
            auto max_element = std::max_element(nums.begin(), nums.end());
            int l = std::distance(nums.begin(), max_element);
            nums.erase(nums.begin()+l);
            k--;
        }
        return *std::max_element(nums.begin(),nums.end());
    }*/
    

    // using priority_queue
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(int i = 0; i<nums.size(); i++){
            q.push(nums[i]);
        }
        while(k != 1){
            q.pop();
            k--;
        }
        return q.top();
    }
};