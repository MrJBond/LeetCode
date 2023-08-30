class Solution {
public:
    
    // convert to 26-base system
   int titleToNumber(string columnTitle) {
        int sum = 0;
        if(columnTitle.length() == 1){
            return columnTitle[0] - 64;
        }
        else{
            for(int i=0; i<columnTitle.length(); i++){
                sum += ((columnTitle[i] - 64) * pow(26,columnTitle.length()-1-i));
            }
        }
        return sum;
    
    }
};