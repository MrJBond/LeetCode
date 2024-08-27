class Solution {
public:

// Invalid order 

  /*  vector<string> generateParenthesis(int n) {
        vector<string> res;
        if(n == 1){
            res.push_back("()");
            return res;
        }
        vector<string> prev = generateParenthesis(n-1);
        for(int i = 0; i<prev.size(); ++i){
            res.push_back("(" + prev[i] + ")");
            res.push_back(prev[i] + "()");
            if(res.back() != "()" + prev[i]){
                res.push_back("()" + prev[i]);
            }
        }
        return res;
    }*/
    void solve(string cur, int open, int close, vector<string>& res){
        if(open == 0 && close == 0){
            res.push_back(cur);
            return;
        }
        if(close == open){
            string add = cur;
            add.push_back('(');
            solve(add, open-1, close, res) ;
        }
        else if(close == 0){
            string add = cur;
            add.push_back('(');
            solve(add, open-1, close, res);
        }
        else if(open == 0){
            string add = cur;
            add.push_back(')');
            solve(add, open, close-1, res);
        }
        else{
            string add1 = cur;
            string add2 = cur;
            add1.push_back('(');
            add2.push_back(')');
            solve(add1, open-1, close, res);
            solve(add2, open, close-1, res);
        }
    }
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        vector<string> res;
        string cur = "";
        solve(cur, open, close, res);
        return res;
    }
};