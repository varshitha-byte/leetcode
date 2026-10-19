class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = INT_MIN;
        int left=0;
        int right=0;
        vector<int>freq(128,0);
        for(;right<s.size();right++){
freq[s[right]]++;
            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            ans = max(ans,right-left+1);
        }
        if(ans==INT_MIN){
            return 0;
        }

        return ans;
    }
};