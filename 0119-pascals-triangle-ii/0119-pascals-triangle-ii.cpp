class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        if(rowIndex == 0){
            res.push_back(1);
            return res;
        }
        if(rowIndex == 1){
            res.push_back(1);
            res.push_back(1);
            return res;
        }
        vector<int> prev = getRow(rowIndex-1);
        res.push_back(1);
        for(int i = 0; i < prev.size()-1; ++i){
            res.push_back(prev[i] + prev[i+1]);
        }
        res.push_back(1);
        return res;
    }
};