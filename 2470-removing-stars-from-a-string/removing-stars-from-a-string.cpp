class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='*'){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

        string ans_reverse="";
        for(int i = 0;i<ans.size();i++){
            ans_reverse+=ans[ans.size()-i-1];
        }
        return ans_reverse;;
    }
};