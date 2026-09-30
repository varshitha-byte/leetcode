class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> alpha(26, 0);
        for (int i = 0; i < s.size(); i++) {
            alpha[s[i] - 'a']++;
        }
        vector<bool> used(26,false);

        int i = 0;
        stack<char> st;
        // st.push(s[0]);
        while (i < s.size()) {
            alpha[s[i] - 'a']--;
            if(used[s[i]-'a']){
                i++;
                // alpha[s[i]-'a']--;
                continue;
            }
            while (!st.empty()&&alpha[st.top() - 'a'] > 0 && st.top() > s[i]) {
                // alpha[st.top() - 'a']--;
                used[st.top()-'a']=false;
                st.pop();
            }

            st.push(s[i]);
            // alpha[st.top()-'a']--;
            used[s[i]-'a']=true;
            i++;
        }

        string ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};