class Solution {
public:

    // using loop - TLE

    /*bool isPowerOfThree(int n){
        if(n==1){
            return true;
        }
        for(int i = 0; i<=n/3; i++){
            if(pow(3,i) == n)
                return true;
            }
            return false;
    }*/

    // using recursion

    bool isPowerOfThree(int n){
        if(n == 1) 
            return true;
        if(n == 0) 
            return false;
        else return n % 3 == 0 && isPowerOfThree(n/3);
    }

};