
bool isPalindrome(int x) {
    int n = x;
    if(n < 0){return false;}
    if(n < 10){return true;}
    long long reverse = 0;
    while(x >= 10){
        reverse = reverse * 10 + (x % 10);
        x /= 10;
    }
    reverse = reverse * 10 + x; //One more number
    return reverse == n; 
}