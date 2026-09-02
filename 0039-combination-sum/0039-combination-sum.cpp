class Solution {
public:

    void func(vector<int> & candidate , vector<vector<int>> & ans , vector<int>nums, int remaining , int idx){
        if(idx>=candidate.size()){
            return;
        }

        if(remaining == 0 ){
            ans.push_back(nums);
            return;
        }

        func(candidate,ans,nums,remaining,idx+1);
        if(candidate[idx]<=remaining){
            nums.push_back(candidate[idx]);
            func(candidate ,ans,nums,remaining - candidate[idx],idx);
        }

        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        func(candidates, ans, {},target ,0);
        return ans;
    }
};