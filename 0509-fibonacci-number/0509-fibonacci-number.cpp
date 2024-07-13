class Solution {
public:
unordered_map<int,int> mem;
    int fib(int n) {
        if(mem[n] != 0){
            return mem[n];
        }
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        int res = fib(n-1) + fib(n-2);
        mem[n] = res;
        return res;
    }
};