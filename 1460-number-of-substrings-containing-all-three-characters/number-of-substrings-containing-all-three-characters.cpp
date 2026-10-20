class Solution {
public:
    int atmost(string s, int k) {
        unordered_map<char, int> count;
        int ans = 0;
        int left = 0;
        for (int right = 0; right < s.size(); right++) {
            count[s[right]]++;
            while((count['a']&&count['b'])+(count['b']&&count['c'])+(count['c']&&count['a'])>k){
                count[s[left]]--;
                left++;
                
            }
            ans+=right-left+1;
        }
        return ans ;
    }

    int numberOfSubstrings(string s) {
        return atmost(s,3)-atmost(s,2);
    }
};