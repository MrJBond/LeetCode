class Solution {
public:
    bool isSeq(int n){
        while(n > 10){
            int last = n%10;
            int prev = (n/10)%10;
            n /= 10;
            if(last - prev != 1){
                return false;
            }
        }
        return true;
    }
     int toSeq(int n){
         
        bool seq = false;
        
         if(isSeq(n)){
             seq = true;
         }

        int len = 0;
        while(n >= 10){
            len++;
            n /= 10;
        }
        
        if(seq){
            n++;
        }
       
        // n = first didg. now
        
        int lastI = len+n;

        // next num from 1
        if(lastI >= 10){
            n = 1;
            len++;
            lastI = len+n;
        }
            
        n *= pow(10, len);
       
        int i = 0;
        while(len > 0){
            n += (lastI*pow(10, i));
            len--;
            i++;
            lastI--;
        }
        return n;
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;

        if(low == high){
            return res;
        }

        if(isSeq(low)){
            if(low == 10){
                res.push_back(12);
            }else{
                res.push_back(low);
            }
        }
        
        while(toSeq(low) <= high){

            if(toSeq(low) > low)
               res.push_back(toSeq(low));
            low = toSeq(low);
        }
        return res;
    }
};