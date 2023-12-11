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
        int numDidg = findCount(number);

        while(number >= 10){
            reversed += (number%10)*pow(10,numDidg-1);
            number = number/10;
            numDidg--;
        }
        reversed += number;
        
        return (reversed == x);
    }
};