class Solution {
public:
    int findCount(int num){
        int count = 0;
        while(num != 0){
            
            num = num/10;
            count++;
        }
        return count;
    }
    bool isPalindrome(int x) {
        
        if(x < 0 || x == 10 ){
            return false;
        }
        if(x >= 0 && x < 10){
            return true;
        }
        
        long long int reversed = 0;
        int number = x;
        
        while(number >= 10){
            int numDidg = findCount(number);
            reversed += (number%10)*pow(10,numDidg-1);
            number = number/10;
        }
        reversed += number;
        
        return (reversed == x);
    }
};