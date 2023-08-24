class Solution {
public:
    
    // TLE
    
    /*void reverseString(vector<char>& s) {
        char temp;
        for(int i =0; i<s.size(); i++){
            for(int j=i+1; j<s.size(); j++){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }*/

    
    
    vector<char> reverseString(vector<char>& s){
        vector<char> res;
        for(int i=s.size()-1; i!=-1; i--){
            res.push_back(s[i]);
        }
        for(int i=0; i < res.size(); i++){
            s[i] = res[i];
        } 
        return s;
    }
    
    
    /*void reverseString(vector<char>& s){
        char temp;
        for(int i=0; i<s.size(); i++){
            for(int j=i+1; j<s.size(); j++){
                //temp = s[i];
                //s[i] = s[j];
                //s[j] = temp;
                swap(s[i],s[j]);
            }
        }
    }*/
};