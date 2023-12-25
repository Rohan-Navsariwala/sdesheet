//this one is bruteforce approach using O(mn) space complexity
//there is a better approach using O(m+n) spcae complexity

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // initialized vector of vector with value of matrix vector
        vector<vector<int>> solution = matrix;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {

                    // replaces intire row with vector of 0 values
                    solution[i] = vector<int>(matrix[0].size(), 0);

                    // makes intire column with value 0 each
                    for (int k = 0; k < matrix.size(); k++) {
                        solution[k][j] = 0;
                    }
                }
            }
        }

        matrix = solution;
    }
};