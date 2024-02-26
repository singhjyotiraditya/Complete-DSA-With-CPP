//TC = O(n*m)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty()) return ans; // Handle empty matrix case
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        int startRow = 0;
        int startCol = 0;
        int endRow = row - 1;
        int endCol = col - 1;

        while (count < total) {

            // Print first row
            for (int i = startCol; i <= endCol && count < total; i++) {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            // Print last column
            for (int i = startRow; i <= endRow && count < total; i++) {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            // Print last row
            for (int i = endCol; i >= startCol && count < total; i--) {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            // Print first column
            for (int i = endRow; i >= startRow && count < total; i--) {
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = sol.spiralOrder(matrix);

    // Print the result
    cout << "Spiral Order Traversal:" << endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
