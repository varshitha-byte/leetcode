class Solution {
public:
//pick a subarray with maximum number of 1s and size - no of 1s <= k
    int longestOnes(vector<int>& nums, int k) {
        int left =0;
        int ones = 0;
        int maxsize = 0;
        for(int right = 0;right <nums.size();right++){
            if(nums[right]){
                ones++;
            }
            while(right-left+1-ones>k){
                if(nums[left]){
                    ones--;
                }
                left++;
            }
            maxsize=max(maxsize,right-left+1);
        }
        return maxsize;
    }
};