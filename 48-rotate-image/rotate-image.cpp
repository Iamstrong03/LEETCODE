class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> m(n, vector<int>(n));
        int col = n-1;
        for (int i = 0; i < n; i++) {
            int row = 0;
            int col = n-1-i;
            for (int j = 0; j < n; j++) {
                m[row][col] = matrix[i][j];
                row++; 
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                matrix[i][j] = m[i][j];
            }
        }
    }
};