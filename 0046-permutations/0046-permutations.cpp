class Solution {
public:
vector<vector<int>> permute(vector<int>& v){
    // base 
    vector<vector<int>> res;
    if(v.size() == 1){
        return {v};
    }    
    
    for(int i = 0; i <v.size(); i++){
        int e = v[i]; // memorize the element
        vector<int> temp(v.begin(),v.end());
        temp.erase(temp.begin()+i); // remove the memorized element
        vector<vector<int>> rec = permute(temp); // permute the remaining 
        
        // add the memorized element to all the permutations
        for(int j = 0; j < rec.size(); j++){
            vector<int> vec = rec[j];
            vec.insert(vec.begin(), e);
            res.push_back(vec);
        }
        
    }
    return res;
}
};