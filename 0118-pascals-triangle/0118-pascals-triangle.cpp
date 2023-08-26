class Solution {
public:


// using combinatorics ( 21 / 30 testcases )

/*unsigned long long factorial(unsigned long long int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    else{
        return factorial(n-1) * n;
    }
}
unsigned long long int c(unsigned long long int n,unsigned long long int i){
    return factorial(n)/(factorial(i)*factorial(n-i));
}
vector<int> v(int n){
    vector<int> vec;
    for(unsigned long long int i=0; i<n+1;i++){
        vec.push_back(c(n,i));
    }
    return vec;
}

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(unsigned long long int i = 0;i<numRows; i++){
            result.push_back(v(i));
        }
        
        return result;
    }*/


    // solution
 
  vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        // init result with all 1s 
        for(int i = 0; i<numRows; i++){
            res.push_back(vector<int>(i+1,1));
        }
        for(int i = 2; i<numRows; i++){
            for(int j = 1; j<i; j++){
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        return res;
    }






















};