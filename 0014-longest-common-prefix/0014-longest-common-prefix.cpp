class Solution {
public:

    // the longest common prefix will be in first and last 
    // string if the array is sorted

    string longestCommonPrefix(vector<string>& strs) {
        string pref = "";

        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size()-1];

        for(int i=0; i<first.length(); i++){

            // there is no common prefix
            if(first[0] != last[0]){
                return "";
            }
            
            if(first[i] == last[i]){
                pref+=first[i];
            }
            else // prefix was ended
                break;
        }
        return pref;
    }
};