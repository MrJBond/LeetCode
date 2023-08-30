class Solution {
public:
string sorter(string s){
    char str;
    for(int i=0; i<s.length(); i++){
        for(int j = i+1; j<s.length(); j++){
            if(s[i]>s[j]){
                str = s[i];
                s[i] = s[j];
                s[j] = str;
            }
        }
        }
        return s;
}
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());  
        if(s == t){
            return true;
        }
        return false;
    }
};