class Solution {
public:
    
    // using stack
    
    bool isValid(string s) {
        stack<char> st;

        for(int i=0; s[i] != '\0'; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else if((s[i] == ')' || s[i] == ']' || s[i] == '}') && !st.empty()){
                char cur = st.top();
                if((s[i] == ')' && cur == '(') || (s[i] == ']' && cur == '[') || (s[i] == '}' && cur == '{')){
                    st.pop();
                }
                else
                    return false;
            }
            else{
                return false;
            }
        }
        return st.empty();
    }
};