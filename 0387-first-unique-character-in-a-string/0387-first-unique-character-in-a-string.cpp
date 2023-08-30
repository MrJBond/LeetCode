class Solution {
public:


    // TLE
   /* string remove(string s, char c){
        string r = "";
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] != c)
                r+=s[i];
        }
        return r;
    }
    int firstUniqChar(string s){
        int res = -1;
        string temp = s;
        string str = "";
        for(int i = 0; s[i] != '\0'; i++){
            for(int j = i+1; s[j] != '\0'; j++){
                if(s[i] == s[j]){
                    str += s[i];
                }
            }
        }
        for(int i = 0; s[i] != '\0'; i++){
            for(int j = 0; str[j] != '\0'; j++){
                if(s[i] == str[j]){
                    s = remove(s,s[i]);
                }
            }
        }
        char r = s[0];
        for(int i = 0; temp[i] != '\0'; i++){
            if(temp[i] == r){
                res = i;
            }
        }
        return res;
    }*/

    // 104/105 testcases

    /* int firstUniqChar(string s){
        unordered_map<char, int> mp;
        
        for(int i=0; s[i] != '\0'; i++){
            mp[s[i]]++;
        }
        char c = '\0';
        for(auto x : mp){
            if(x.second == 1){
                c = x.first;
            }
        }
        int r = -1;
        for(int i =0; s[i] != '\0'; i++){
            if(s[i] == c){
                r = i;
            }
        }
        return r;
    }*/

    // using unoredered map

 int firstUniqChar(string s) {
    unordered_map<char, int> mp;
    
    for (int i = 0; s[i] != '\0'; i++) {
        mp[s[i]]++;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        char key = s[i];
        auto temp = mp.find(key);
        if (temp->second == 1) {
            return i;
        }
    }
    return -1;
}


};