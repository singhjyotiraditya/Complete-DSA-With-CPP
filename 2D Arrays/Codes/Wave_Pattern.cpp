//TC = O(nm)

#include <bits/stdc++.h> 
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int i = 0; i < mCols; i++) {
        if (i % 2 != 0) //OR  if (i&1) *Explaination at the end
        {
            for (int j = nRows - 1; j >= 0; j--) {
                ans.push_back(arr[j][i]);
            }
        } else {
            for (int j = 0; j < nRows; j++) {
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}

int main() {
    // Example usage of the wavePrint function
    int nRows = 3;
    int mCols = 3;
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> result = wavePrint(arr, nRows, mCols);

    // Print the result
    cout << "Wave printed array: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}


//If col is an even number, its binary representation ends with 0, and 'col & 1' will be 0.
//If col is an odd number, its binary representation ends with 1, and 'col & 1' will be 1.