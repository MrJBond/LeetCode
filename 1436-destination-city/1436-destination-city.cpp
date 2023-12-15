class Solution {
public:

    int binSearch(vector<string> v, string tar){

        int first = 0;
        int last = v.size() - 1;

        while(first <= last){
            int mid = (first + last)/2;

            if(tar == v[first]){
                return first;
            }
            if(tar == v[last]){
                return last;
            }
            if(tar == v[mid]){
                return mid;
            }
            if(v[mid] > tar){
                last = mid-1;
            }
            if(v[mid] < tar){
                first = mid+1;
            }
        }
        return -1;
    }

    string destCity(vector<vector<string>>& paths) {
        
        string result = "";

        vector<string> first;
        vector<string> second;

        for(int i = 0; i<paths.size(); i++){
            first.push_back(paths[i][0]);
            second.push_back(paths[i][1]);
        }

        // Search in the first vec
        sort(first.begin(),first.end());
        
        for(int i = 0; i<second.size(); i++){
            if(binSearch(first, second[i]) == -1){
                result = second[i];
            }
        }
        return result;
    }
};