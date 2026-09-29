class Solution {
public:
    string removeKdigits(string nums, int k) {
        string ans;
        int i = 0;
        int j = 0;
        ans.push_back(nums[0]);
        while (i < nums.size() - 1 ) {
            // ans.push_back(nums[i]);
            if (!ans.empty() && nums[i + 1] >= ans.back()) {
                ans.push_back(nums[i + 1]);
            } else {
                while (!ans.empty()&&nums[i + 1] < ans.back()&&k) {
                    ans.pop_back();
                    k--;
                }
                // ans.pop_back();
                ans.push_back(nums[i + 1]);
                // k--;
            }
            i++;
        }

        while (k > 0) {
            ans.pop_back();
            k--;
        }
        j = 0;
        while (j < ans.size() && ans[j] == '0') {
            j++;
        }
        ans = ans.substr(j);
        if (ans.empty()) {
            return "0";
        }

        return ans;
    }
};