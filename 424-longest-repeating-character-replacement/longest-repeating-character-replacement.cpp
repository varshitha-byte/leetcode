class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        unordered_map<char, int> count;
        int maxans = 0;
        int maxcount = 0;
        for (int right = 0; right < s.size(); right++) {
            count[s[right]]++;
            maxcount = max(maxcount, count[s[right]]);
            while ((right - left + 1) - maxcount > k) {
                count[s[left]]--;
                left++;
            }
            maxans = max(maxans, right - left + 1);
        }
        return maxans;
    }
};