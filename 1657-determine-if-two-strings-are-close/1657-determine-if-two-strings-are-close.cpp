class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length()){
            return false;
        }
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());

        if(word1 == word2){
          return true;
        }
        vector<int> first(26, 0);
        vector<int> second(26, 0);

        // index = letterNumber - 1
        for(int i = 0; word1[i] != '\0'; i++){
          // 'a' = 97
          first[word1[i] - 'a']++;
          second[word2[i] - 'a']++;
        }

        // All letters should be the same
        for(int i = 0; i<26; i++){
            if(first[i] != 0 && second[i] == 0){
                return false;
            }
        }

        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        
        return first == second;
    }
};