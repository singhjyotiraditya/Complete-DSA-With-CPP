#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        int startCol = 0;
        int startRow = 0;
        int endCol = col - 1;
        int endRow = row - 1;

        while (startRow <= endRow && endCol >= startCol) {
            int i = startCol;
            int j = endRow;

            for (i = startCol; i <= endCol; i++) {
                swap(matrix[startRow][i], matrix[j][endCol]);
                j--;
            }
            endCol--;
            startRow++;
        }

        reverse(matrix.begin(), matrix.end());
    }
};

int main() {
    Solution sol;

    // Create a sample matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    // Rotate the matrix
    sol.rotate(matrix);

    cout << "Rotated Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
