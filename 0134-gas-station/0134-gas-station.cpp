class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasSum = 0;
        int costSum = 0;
        int totalGas = 0;
        int r = 0;
        
        for(int i = 0; i<gas.size(); i++){
            gasSum += gas[i];
            costSum += cost[i];
            totalGas += gas[i] - cost[i];

            if(totalGas < 0){
                r = i+1;
                totalGas = 0;
            }
            }
        return (gasSum<costSum)? -1: r;
    }
};