class Solution {
public:
    // pick the longest subarray containing 2 different fruits
    int totalFruit(vector<int>& nums) {
        int left = 0;
        int count =0;
        int maxcount =0;
        unordered_map<int,int>mp;
        for(int right = 0;right<nums.size();right++){
            mp[nums[right]]++;
            while(mp.size()>2){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            maxcount=max(maxcount,right-left+1);
        }
        return maxcount;
    }
};