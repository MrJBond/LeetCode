class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mp;
        for(int i = 0; stones[i] != '\0'; ++i){
            mp[stones[i]]++;
        }
        int r = 0;
        for(int i = 0 ; jewels[i] != '\0'; ++i){
            r += mp[jewels[i]];
        }
        return r;
    }
};