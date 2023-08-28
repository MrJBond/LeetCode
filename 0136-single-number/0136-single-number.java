import java.util.Hashtable;
import java.util.Map;

class Solution {
    public int singleNumber(int[] nums) {
        Hashtable<Integer, Integer> tb = new Hashtable<>();

        for(int num : nums){
            if(tb.containsKey(num)){
                int val = tb.get(num);
                tb.replace(num, val, ++val);
            }
            else{
                tb.put(num,1);
            }
        }
        int res = 0;
        for(Map.Entry<Integer, Integer> e : tb.entrySet()){
            if(e.getValue() == 1){
                res = e.getKey();
            }
        }
        return res;
    }
}