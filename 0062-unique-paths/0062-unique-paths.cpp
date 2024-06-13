class Solution {
public:

// first solution

/*struct pair_hash { // To store the pair as a key
	template<class T1, class T2>
	size_t operator()(const pair<T1, T2>& p) const{
		auto h1 = hash<T1>{}(p.first);
		auto h2 = hash<T2>{}(p.second);
		return h1 ^ h2;
	}
};
unordered_map<pair<int, int>, int, pair_hash> mem;
int uniquePaths(int m, int n) {
	if (n == 1 && m == 1) {
		return 1;
	}
	if (n == 1 || m == 1) {
		return 1;
	}
	if (mem[make_pair(m, n)] != 0) {
		return mem[make_pair(m, n)];
	}
	int res = uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
	mem[make_pair(m, n)] = res;
	return res;
}*/

// second solution

int helper(int n, int m, vector<vector<int>>& dp){
    if(dp[n][m] != -1){
        return dp[n][m];
    }
    if(n == 1 || m == 1){
        return 1;
    }
    int res = helper(n-1, m, dp) + helper(n, m-1, dp);
    dp[n][m] = res;
    return res;
}
int uniquePaths(int m, int n) {
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
    return helper(n, m, dp);    
}

};