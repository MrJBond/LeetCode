class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> hash;

        for(int i = 0; i<arr.size(); i++){
            hash[arr[i]]++;
        }
        // All elements are unique in the set
        set<int> s;
        for(auto e : hash){
            s.insert(e.second);
        }
        return hash.size() == s.size();
    }
};