#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> positive;
        vector<int> negative;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }

        for (int i = 0; i < nums.size()/2; i++)
        {
            ans.push_back(positive[i]);
            ans.push_back(negative[i]);
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> rearranged = sol.rearrangeArray(nums);

    cout << "Rearranged array: ";
    for (int num : rearranged)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}