class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    
     // initialize an index (digit of units)
    int index = digits.size() - 1;
  
    // while the index is valid and the value at [index] ==
    // 9 set it as 0
    while (index >= 0 && digits[index] == 9)
        digits[index--] = 0;
  
    // if index < 0 (if all digits were 9)
    if (index < 0)
        // insert an one at the beginning of the vector
        digits.insert(digits.begin(), 1, 1);
  
    // else increment the value at [index]
    else
        digits[index]++;
        return digits;
}


};