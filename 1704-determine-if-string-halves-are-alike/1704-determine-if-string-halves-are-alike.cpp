class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int indexSecond = s.length()/2;
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; s[i] != '\0'; i++){
            if(i < indexSecond){
                if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] ==  'o' || s[i] ==  'u' || s[i] ==  'A' || s[i] ==  'E' || s[i] ==  'I' || s[i] ==  'O' || s[i] == 'U' )
                count1++;
            }else{
                if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] ==  'o' || s[i] ==  'u' || s[i] ==  'A' || s[i] ==  'E' || s[i] ==  'I' || s[i] ==  'O' || s[i] == 'U' )
                count2++;
            }
        }
        return count1==count2;
    }
};