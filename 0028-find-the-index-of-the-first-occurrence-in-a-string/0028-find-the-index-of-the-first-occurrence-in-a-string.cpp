class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = needle.length();
        string temp = "";
        int begin = -1;
        int last = -1;
        
        for(int i = 0; haystack[i] != '\0'; i++){
            
            if(temp == ""){
                if(needle[0] == haystack[i]){
                    temp += haystack[i];
                    begin = i;
                    last = begin+n-1;
                }
                else{
                    temp += "";
                }
            }else{
                if( i >= begin && i <= last )
                  temp += haystack[i];
            }
            
            if(/*i - begin == n+1*/ i == last ){ 
                if(temp == needle){
                    return begin;
                }
                temp = "";
                i=begin;
                begin = -1;
                last = -1;
            }
        }
        return -1;
    }
};