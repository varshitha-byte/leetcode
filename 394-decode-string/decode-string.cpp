class Solution {
public:
    string decodeString(string s) {
        stack<string>temp;
        stack<int>number;
        string curr ="";
        int num = 0;
        for(int i =0;i<s.size();i++){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }else if(s[i]=='['){
                temp.push(curr);
                number.push(num);
                num=0;
                curr="";
            }else if(s[i]==']'){
                int k =number.top();
                number.pop();
                string prev=temp.top();
                temp.pop();
                while(k--){
                    prev+=curr;
                }
                curr=prev;
            }else{
                curr+=s[i];
            }
        }

        return curr;
    }
};