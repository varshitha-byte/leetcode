class Solution {
public:

    vector<string> func(int n,int open,int close,string s,vector<string>&ans){
        if(close==n){
            ans.push_back(s);
            return ans;
        }
        if(open<n){
            func(n,open+1,close,s+'(',ans);
        }
        if(open>close){
            func(n,open,close+1,s+')',ans);
        }
        return ans;
    }

    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string>ans;
        return func(n,0,0,s,ans);
    }
};