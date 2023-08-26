class Solution {
public:

    // first solution

   /* void rotate(vector<vector<int>>& matrix) {
           vector<int> v;
           int j = 0;
          while(j<matrix.size()){
           for(int i = matrix.size()-1; i != -1; i--){

               // write elements in the right order
              v.push_back(matrix[i][j]);
           }
           j++;
           }

           // putting elements to the matrix
           int k = 0;
            for(int i=0; i<matrix.size(); i++){
                for(int j = 0; j<matrix[i].size(); j++){
                    matrix[i][j] = v[k];
                    k++;
                }
            }
    }*/

    // second solution

    void rotate(vector<vector<int>>& matrix) {
        int rowSize = matrix[0].size();
        vector<int> temp;

        // memorize elements (writing rows in reverse order)
        for(int i=rowSize-1; i!=-1; i--){
            for(int j=0; j<matrix[i].size(); j++){
                temp.push_back(matrix[i][j]);
            }
        }

           for(int j=0; j<rowSize; j++){
            for(int i=0; i<rowSize; i++){

                // write elements in the right order
                matrix[j][i] = temp[j+(rowSize*i)];
            }
           }

        }
};