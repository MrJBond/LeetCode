class Solution {
public:
    int sumDidg(int num) {
        int sum = 0;

        while(num > 0){
            sum += num%10;
            num = num/10;
        }
        return sum;
    }
    int addDigits(int num) {

        while(num % 10 != num){
            num = sumDidg(num);
        }
        return num;
    }
};