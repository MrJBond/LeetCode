class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<vector<char>> columns;
        vector<vector<char>> squares;
        vector<vector<char>> rows = board;

        // columns
        int j = 0;
        while(j < 9){
            vector<char> temp;
            for(int i=0; i<9; i++){
                temp.push_back(board[i][j]);
            }
            columns.push_back(temp);
            j++;
        }

        // squares 3x3
        for (int blockRow = 0; blockRow < 3; blockRow++) {
            for (int blockCol = 0; blockCol < 3; blockCol++) {
            vector<char> temp;

            for (int i = blockRow * 3; i < (blockRow + 1) * 3; i++) {
                for (int j = blockCol * 3; j < (blockCol + 1) * 3; j++) {
                    temp.push_back(board[i][j]);
                }
            }

            squares.push_back(temp);
        }
    }
        // remove '.'
        for(int i = 0; i<rows.size(); i++){
            rows[i].erase(remove(rows[i].begin(),rows[i].end(),'.'),rows[i].end());
        }  
        for(int i = 0; i<columns.size(); i++){
            columns[i].erase(remove(columns[i].begin(),columns[i].end(),'.'),columns[i].end());
        }  
        for(int i = 0; i<squares.size(); i++){
            squares[i].erase(remove(squares[i].begin(),squares[i].end(),'.'),squares[i].end());
        }   

        // look for duplicates
        for(int i=0; i<rows.size(); i++){
              // Sort the vector.
            std::sort(rows[i].begin(), rows[i].end());

            // Check if the vector contains any duplicates.
            auto it = std::unique(rows[i].begin(), rows[i].end());

            if (it == rows[i].end()) {
                continue;
            }
            else
                return false;

        }

        for(int i=0; i<columns.size(); i++){
              // Sort the vector.
            std::sort(columns[i].begin(), columns[i].end());

            // Check if the vector contains any duplicates.
            auto it = std::unique(columns[i].begin(), columns[i].end());

            if (it == columns[i].end()) {
                continue;
            }
            else
                return false;
        }

        for(int i=0; i<squares.size(); i++){
              // Sort the vector.
            std::sort(squares[i].begin(), squares[i].end());

            // Check if the vector contains any duplicates.
            auto it = std::unique(squares[i].begin(), squares[i].end());

            if (it == squares[i].end()) {
                continue;
            }
            else
                return false;
        }
        return true;
    }
};