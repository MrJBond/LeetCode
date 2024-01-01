class Solution {
public:

    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(), s.end());

        int count = 0;

        int lastChild = g.size()-1;
        int lastCookie = s.size()-1;

        while(lastChild >= 0 && lastCookie >= 0){
            if(s[lastCookie] >= g[lastChild]){
                count++;
                lastChild--;
                lastCookie--;
            }else{
                lastChild--;
            }
        }
        return count;
    }
};