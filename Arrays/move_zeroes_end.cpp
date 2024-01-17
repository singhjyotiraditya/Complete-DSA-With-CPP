#include <vector>
#include <iostream>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int n = nums.size();
        int j = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        for (int i = j + 1; i < n; i++) {
            if (nums[i] != 0) {
                std::swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {
    Solution solution;

    // Example vector
    std::vector<int> nums = {0, 1, 0, 3, 12};

    // Print original vector
    std::cout << "Original Vector: ";
    for (const auto& num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Call moveZeroes function
    solution.moveZeroes(nums);

    // Print modified vector
    std::cout << "Modified Vector: ";
    for (const auto& num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


//Optimal approach: Use two pointer approach, firstly find j as the first occurence of 0 and i=j+1; now if there is a non-zero number at i swap it with j and j++;   TC=O(x)+O(n-x)=O(n) SC=1

//Brute force : firstly make a temp array and add all the non zero elements of array then add all the elements of temp to array one by one and fill the remaining array nwith zeros. TC: O(x)+O(n)+O(n-x)~O(2N)  SC=N


// for (int i = 0; i < n; i++) {
//         if (a[i] != 0)
//             temp.push_back(a[i]);
//     }

//     // number of non-zero elements.
//     int nz = temp.size();

//     //copy elements from temp
//     //fill first nz fields of
//     //original array:
//     for (int i = 0; i < nz; i++) {
//         a[i] = temp[i];
//     }

//     //fill rest of the cells with 0:
//     for (int i = nz; i < n; i++) {
//         a[i] = 0;
//     }