class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {

        vector<vector<int>> empty;
        if(grid.size() == 0){
            return empty;
        }
        vector<vector<int>> result(grid.size(),vector<int>(grid[0].size(),0));

        unordered_map<int, int> onesCol;
        unordered_map<int, int> onesRow;
        unordered_map<int, int> zerosCol;
        unordered_map<int, int> zerosRow;
        
        for(int i = 0; i<grid.size(); i++){
            onesRow[i] = 0;
            zerosRow[i] = 0;
        }
        for(int i = 0; i<grid[0].size(); i++){
            onesCol[i] = 0;
            zerosCol[i] = 0;
        }

        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[i].size(); j++){
                if(grid[i][j] == 0){
                    zerosCol[j] += 1;
                    zerosRow[i] += 1;
                }
                else{
                    onesCol[j] += 1;
                    onesRow[i] += 1;
                }
            }
        }
        for(int i = 0; i<result.size(); i++){
            for(int j = 0; j<result[i].size(); j++){
                result[i][j] += ( onesCol.at(j) + onesRow.at(i) - zerosCol.at(j) - zerosRow.at(i) );
            }
        }
        return result;
    }
};