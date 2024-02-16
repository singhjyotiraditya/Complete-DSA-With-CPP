#include <iostream>
#include <vector>

class Solution {
public:
    bool check(std::vector<int>& nums) {
        int n = nums.size();
        int x;
        bool flag = true;
        int count = 0;

        // Find the index 'x' where the rotation occurs
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                x = i;
                flag = false;
            }
        }

        // If the array is already sorted, return true
        if (flag) return true;

        // Check if the array is sorted after rotation
        if (nums[0] < nums[n - 1]) return false;

        // Check if the two parts after rotation are sorted
        for (int i = x + 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                return false;
            }
        }

        // Check if the two parts before rotation are sorted
        for (int i = 1; i < x; i++) {
            if (nums[i] < nums[i - 1]) {
                return false;
            }
        }

        // If all conditions are satisfied, return true
        return true;
    }
};

int main() {
    // Example usage
    Solution solution;

    // Example 1: Rotated sorted array
    std::vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    std::cout << "Example 1: " << std::boolalpha << solution.check(nums1) << std::endl;

    // Example 2: Non-rotated sorted array
    std::vector<int> nums2 = {1, 2, 3, 4, 5};
    std::cout << "Example 2: " << std::boolalpha << solution.check(nums2) << std::endl;

    return 0;
}
