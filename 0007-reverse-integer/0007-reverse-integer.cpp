class Solution {
public:
    int reverse(int x) {
        if((x>= pow(2,31)-1) || (x<= pow(2,31)*(-1))){
            return 0;
        }
        
        else{
            // reverse using string
            string str = to_string(x);
            string result;
            for(int i=str.length(); i!=-1; i--){
                result+=str[i];
            }
        long int i = 0;
        for (char c : result) {
            // check if the element is number
            if (c >= '0' && c <= '9') {
                i = i * 10 + (c - '0');
            }
        }
        if((i>= pow(2,31)-1) || (i<= pow(2,31)*(-1))){
            return 0;
        }
    if(x<0)
        return i*(-1);
    return i;
    }
    }
};