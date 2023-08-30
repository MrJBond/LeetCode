class Solution {
     public:

    // using Fibonacci numbers
    int climbStairs(int n) {
        if(n <= 3){
            return n;
        }
        int next = 3, prev = 2;
        for(int i = 0; i < n-3; i++){
            next = next + prev;
            prev = next - prev;
        }
        return next;
    }

    // 34/45 testcases, using recursion

   /*int climbStairs(int n) {
    if(n <= 3){
        return n;
    }
    return climbStairs(n-1) + climbStairs(n-2);
}*/

};