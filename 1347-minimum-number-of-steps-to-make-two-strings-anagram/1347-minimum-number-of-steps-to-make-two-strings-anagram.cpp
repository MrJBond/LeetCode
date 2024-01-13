class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> HashTabS;
        unordered_map<char, int> HashTabT;

        for(int i = 0; s[i] != '\0'; i++){
            HashTabS[s[i]]++;
        }
        for(int i = 0; t[i] != '\0'; i++){
            HashTabT[t[i]]++;
        }
        int countSimilar = 0;

        for(auto el : HashTabS){
            // It is present
            if(HashTabT.find(el.first) != HashTabT.end()){
                int valT = HashTabT.at(el.first);

                // Count similar chars
                countSimilar += min(el.second, valT);
            }
        }
        return s.length() - countSimilar;
    }
};