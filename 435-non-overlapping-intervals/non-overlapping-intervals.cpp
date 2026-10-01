class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end());
        int prev = 0;
        int i = 1;
        int c = 0;
        while (i < nums.size()) {
            if (nums[prev][1] > nums[i][0]) { // overlap
                if (nums[prev][1] >= nums[i][1]) {
                    prev = i;
                }
                c++;
            }else{
                prev = i;
            }

            i++;
        }

        

        return c;
    }
};