class Solution {
    
    
    // brute force
    
    /*public int[] twoSum(int[] nums, int target) {
       int[] res = new int[2];
       for(int i=0; i<nums.length; i++){
           for(int j=i+1; j<nums.length; j++){
               if(nums[i] + nums[j] == target){
                   res[0] = i;
                   res[1] = j;
               }
           }
       }
       return res; 
    }*/
    
    // using HashSet
    
        
    public static int[] twoSum(int[] nums, int target) {
        
        int[] res = {0,0};
        
        HashMap<Integer,Integer> map = new HashMap<>();
        
        for(int i = 0; i<nums.length; i++){
            
            if(map.containsKey(target - nums[i])){
                Integer el = map.get(target - nums[i]);
            
                res[0] = i;
            
                res[1] = el;
            }
            
            map.put(nums[i],i);
        }
        return res;
    }
}