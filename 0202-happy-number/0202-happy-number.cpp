class Solution {
public:

    // first solution

    /*int sumOfSq(int n){
        string s = to_string(n);
        int sum = 0;
        for(int i=0; i<s.length(); i++){
            sum += (int(s[i])-48)*(int(s[i])-48);
        }
        return sum;
    }*/

    // second solution

    int sumOfSq(int n){
        int sum = 0;
        
        while(n > 0){
            sum += (n%10)*(n%10);
            n = n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        set<int> set;
        while(n!=1 && !set.count(n)){
            set.insert(n);
            n = sumOfSq(n);
        }
        return n==1;
    }
};