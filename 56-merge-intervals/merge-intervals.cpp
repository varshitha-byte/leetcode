class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int n = nums.size();
        int k =0;
        for(int i =0;i<n;i++){
            if(nums[k][1]>=nums[i][0]){
                nums[k][1]=max(nums[k][1],nums[i][1]);
            }else{
                k++;
                nums[k]=nums[i];
            }
        }
        nums.resize(k+1);
        return nums;
    }
};