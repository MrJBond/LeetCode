class Solution {
public:
    int lengthOfLastWord(string s) {

        int last = s.length()-1;

        // Ignore last spaces
        if(s[last] == ' '){
            while(s[last] == ' '){
                last--;
            }
        }
        // If the first char is not a space and all 
        // other are spaces
        if(last == 0){
            return 1;
        }

        int count = 0;
        for(int i = last; i >= 0; i--){
            
            if(s[i] == ' '){
                break;
            }

            count++;
        }
        return count;
    }
};