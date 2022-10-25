class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0,maxSum=INT_MIN;
       for (int i = 0; i < nums.size(); ++i) {
            if (i < k) {
                sum += nums[i];
                if (i == k - 1) maxSum = sum;
            } else {
                sum += nums[i] - nums[i - k];
                maxSum = max(maxSum, sum);
            }
        }
        return (double)maxSum / k;
        
       

    }
};
