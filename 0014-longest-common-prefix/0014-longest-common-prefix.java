class Solution {


    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        String first = strs[0];
        String last = strs[strs.length - 1];
        String pref = "";

        if(first.equals("")){
            return "";
        }

        if(first.charAt(0) != last.charAt(0)){
            return "";
        }
        for(int i = 0; i<first.length(); i++){
            
            if(first.charAt(i) != last.charAt(i)){
                break;
            }

            pref += first.charAt(i);

        }
        return pref;
    }
}