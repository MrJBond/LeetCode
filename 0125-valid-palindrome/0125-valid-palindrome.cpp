class Solution {
public:

    // first solution (using two pointers)

    bool isPalindrome(string s) {
        int start = 0, end = s.size()-1;
        while(start <= end){
            // lowercase the char
            char startChar =tolower(s[start]);
            char lastChar = tolower(s[end]);

            // if not alpha numeric increase/decrement pointer respectiverly
            if(!isalnum(int(startChar))){
                start++;
                continue;
            }
            if(!isalnum(int(lastChar))){
                end--;
                continue;
            }

            // if char match go for next char
            if(startChar==lastChar){
                start++;
                end--;
            }else{
                return false;
            }
        }
        return true;
    }

    // second solution (using reverse)

   /* string reverse(string s){
        string res = "";

        for(int i = s.length()-1; i!=-1; i--){
            res += s[i];
        }
        return res;
    }
    bool isPalindrome(string s) {
        string str = "";

        for(int i=0; s[i] != '\0'; i++){
            if(isalnum(int(s[i])))
                str+=(tolower(s[i]));
        }
        string res = reverse(str);

        return res == str;
    }*/
};