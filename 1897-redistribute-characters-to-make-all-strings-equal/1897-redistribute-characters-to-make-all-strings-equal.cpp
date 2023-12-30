class Solution {
public:
    bool makeEqual(vector<string>& words) {
        string sum = "";

        if(words.size() == 1){
            return true;
        }

        // Sum all strings
        for(int i = 0; i<words.size(); i++){
            sum += words[i];
        }

        for(int i = 0; sum[i] != '\0'; i++){
            char c;
            
            // If the char was not counted
            if(sum[i] != '*'){
                c = sum[i];
                
            int count = 1;
            
            for(int j = i+1; sum[j] != '\0'; j++){
                
                // If char was counted before
                if(c != sum[i]){
                    break;
                }
                
                if(c == sum[j] && sum[j] != '*'){
                    count++;
                    
                    // mark as visited
                    sum[j] = '*';
                }
            }
            
            if(count != words.size()){
                if(count % words.size() != 0)
                    return false;
            }
            }
            
        }
        return true;
    }
};