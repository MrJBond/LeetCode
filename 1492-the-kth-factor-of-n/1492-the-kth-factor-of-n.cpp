class Solution {
public:
    int kthFactor(int n, int k) {
        int i = 1;
        while(i <= n+1){
            if(k == 0){
                return i-1;
            }
            if(n % i == 0){
                k--;
            }
            i++;
        }
        return -1;
    }
};