//Rotate Array by K places
//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

//Optimal: Reverse the first part of function using reverse(nums.begin(), nums.begin()+n-k) and then reverse the reamining half and then reverse the whole array.  **k=k%n  

//TC:2n SC:1(No Extra Space)


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.begin() + n - k);
        reverse(nums.begin() + n - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    solution.rotate(nums, k);
    cout << "Rotated Vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


//Brute Force: first of all k=k%n and then check if n=0 or k=0 return the same array. Otherwise, using a temp[n-k] we can store first n-k elements and then shift all the remaining by k and the add the temp elemnts later. 

//TC:O(d)+O(n-d)+O(d) = O(n+d) //SC:O(d) [Extra Space]

//This is left rotation
// for (int i = 0; i < d; i++) {
//         temp[i] = arr[i];
//     }

//     for (int i = d; i < n; i++) {
//         arr[i - d] = arr[i];
//     }

//     for (int i = n - d; i < n; i++) {
//         arr[i] = temp[i - (n - d)];}
