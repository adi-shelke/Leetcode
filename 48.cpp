class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        for (int i = 0; i < row-1; i++)
    {
        for (int j = i+1; j < col; j++)
            swap(matrix[j][i], matrix[i][j]);
    }

        for(int i=0;i<row;i++){
            int startCol = 0;
            int endCol = col-1;

            while(startCol<endCol){
                swap(matrix[i][startCol], matrix[i][endCol]);
                startCol++;
                endCol--;
            }

        }
    }
};

