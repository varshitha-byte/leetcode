class Solution {
public:
    int atmostsubarrays(vector<int>& nums, int k) {
        int oddcount = 0;
        int left = 0;
        int ans = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] % 2 != 0) {
                oddcount++;
            }
            while ( oddcount > k) {
                if (nums[left] % 2 != 0) {
                    oddcount--;
                }
                left++;
            }
                ans += right - left + 1;
            
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {

        return atmostsubarrays(nums,k) - atmostsubarrays(nums,k - 1);
    }
};