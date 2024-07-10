class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        if(n == 0){
            res[0] = 0;
            return res;
        }
        if(n == 1){
            res[0] = 0;
            res[1] = 1;
            return res;
        }
        res[0] = 0;
        res[1] = 1;
        for(int i = 2; i<n+1; ++i){
            if(i % 2 == 0)
               res[i] = res[i/2]; 
             else
               res[i] = res[i/2]+1;
        }
        return res;
    }
};