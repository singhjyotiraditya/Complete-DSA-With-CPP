//Brute Force: List all the possible sub-arrays an check the sum.
/*
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n=a.size();
    int len =0;
   for (int i=0; i<n; i++){
       long long sum=0;
       for (int j=i; j<n; j++){
           
               sum+=a[j];

           if(sum==k){
               len = max(len, j-i+1);
           }
       }
   }
   return len;
}
*/


//OPTIMAL:  we are going to use 2POINTER approach where 
/*
We are using two pointers i.e. left and right. The left pointer denotes the starting index of the subarray and the right pointer denotes the ending index. Now as we want the longest subarray, we will move the right pointer in a forward direction every time adding the element i.e. a[right] to the sum. But when the sum of the subarray crosses k, we will move the left pointer in the forward direction as well to shrink the size of the subarray as well as to decrease the sum. Thus, we will consider the length of the subarray whenever the sum becomes equal to k.
*/
/*
int longestSubarrayWithSumK(vector < int > a, long long k) {
  int n = a.size();
  int j = 0;
  int i = 0;
  int len = 0;
  long long sum = a[0];
  while (i < n) {
    while (j <= i && sum > k) {
      sum -= a[j];
      j++;
    }
    if (sum == k) {
      len = max(len, i - j + 1);
    }
    i++;
    if (i < n) sum += a[i];
  }
  return len;
}
*/