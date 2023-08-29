class Solution {
    public void rotate(int[][] matrix) {
        int rowSize = matrix[0].length;
        int[] temp = new int[rowSize*rowSize];

        int k = -1;
        // memorize elements (writing rows in reverse order)
        for(int i=rowSize-1; i!=-1; i--){
            for(int j=0; j<matrix[i].length; j++){
                temp[++k] = matrix[i][j];
            }
        }

           for(int j=0; j<rowSize; j++){
            for(int i=0; i<rowSize; i++){

                // write elements in the right order
                matrix[j][i] = temp[j+(rowSize*i)];
            }
           }
    }
}