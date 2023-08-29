class Solution {
public:

    // first solution

    int sumDidgString(string s){
        int sum = 0;
        for(int i=0; s[i] != '\0'; i++){
            sum += int(s[i])-48;
        }
        return sum;
    }

    /*int getLucky(string s, int k) {
        string rep = "";

        for(int i=0; s[i] != '\0'; i++){
            rep += to_string(s[i]-96);
        }
        int res = sumDidgString(rep);
        while(k != 1){
            res = sumDidgString(to_string(res));
            k--;
        }
        return res;        
    }*/

    // second solution

    int sumDidg(int n){
        int sum = 0;

        while(n > 0){
            sum += n%10;
            n = n/10;
        }
        return sum;
    }

    int getLucky(string s, int k) {
        string rep = "";

        for(int i=0; s[i] != '\0'; i++){
            rep += to_string(s[i]-96);
        }
        int res = sumDidgString(rep);
        while(k != 1){
            res = sumDidg(res);
            k--;
        }
        return res;  
    }

};