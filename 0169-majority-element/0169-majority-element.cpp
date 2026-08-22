class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int me=nums[0];
        int power=0;
        for(int i=0;i<nums.size();i++){
            if(me==nums[i]){
                power++;
            }
            if(me!=nums[i]&&power){
                power--;
            }
            if(power==0){
                me=nums[i];
                power++;
            }
        }
        return me;
    }
};