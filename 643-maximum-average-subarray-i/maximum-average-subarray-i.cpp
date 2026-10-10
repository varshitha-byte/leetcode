
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start = 0;
        int sum = 0;
        int ans = INT_MIN;

        for (int end = 0; end < nums.size(); end++) {
            sum += nums[end];

            if (end - start + 1 == k) {
                ans = max(sum, ans);
                sum -= nums[start];
                start++;
            }
        }

        return (double)ans / k;
    }
};
