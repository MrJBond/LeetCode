import java.util.Hashtable;
import java.util.Map;
class Solution {
    public int majorityElement(int[] nums) {
        Hashtable<Integer, Integer> tb = new Hashtable<>();

        for(int i=0; i<nums.length; i++){
            if(tb.containsKey(nums[i])){
                int val = tb.get(nums[i]);
                tb.replace(nums[i],val, ++val);
            }
            else{
                tb.put(nums[i],1);
            }
        }
        int res = 0;
        for(Map.Entry<Integer, Integer> el : tb.entrySet()){
            if(el.getValue() > nums.length/2){
                res = el.getKey();
            }
        }
        return res;
    }
}