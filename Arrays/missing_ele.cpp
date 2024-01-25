// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int temp=0;
//         sort(nums.begin(), nums.end());
//         for (int i=0; i<n; i++){
//             if (i!=nums[i]){
//                 return i;
//             }
//         }
//         return n;
//     }
// };

// ALITER: USING SUM
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int total=(n*(n+1))/2;
//         int sum=0;
//         for (int i=0; i<n; i++){
//             sum=sum+nums[i];
//         }
//         return total-sum;
//     }
// };


//XOR
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int xor1=0;
//         int xor2=0;
//         for (int i=0; i<n; i++){
//             xor1=xor1^nums[i];
//             xor2=xor2^(i+1);
//         }
//         return xor1^xor2;
//     }
// };