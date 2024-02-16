#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxp = 0;
        int n=nums.size();
        int sum=nums[0]+nums[1];
        for (int i=2; i<n; i++){
            if (nums[i]<sum){
                sum=sum+nums[i];
                if(maxp<sum){
                    maxp=sum;
                }
            }
            else{
                sum=sum+nums[i];
            }
        }
        if (maxp==0){
            return -1;
        }
        return maxp;
    }
};

int main() {
    // Example usage of the Solution class
    Solution solution;
    
    // Example input vector
    std::vector<int> nums = {1,12,1,2,5,50,3};
    
    // Call the largestPerimeter function and output the result
    long long result = solution.largestPerimeter(nums);
    std::cout << "Largest perimeter: " << result << std::endl;

    return 0;
}