class Solution {
public:
    string reorganizeString(string s) {
        vector<int> freq(26, 0);
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }
        for(int i = 0;i<26;i++){
            if(freq[i]>(s.size()+1)/2){
                return "";
            }
        }
        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < 26; i++) {
            if(freq[i]>0){
                pq.push({freq[i],'a'+i});
            }
        }
        int i = 0;
        string ans = "";
        while (i< s.size() &&!pq.empty() ) {
            char x = pq.top().second;
            int z =pq.top().first;
            if (i > 0 && x == ans[i - 1]) {
                pq.pop();
                if(pq.empty()){
                    return "";
                }

                int y = pq.top().first;
                char c = pq.top().second;
                pq.pop();
                ans+=c;
                y--;
                if(y>0){
                    pq.push({y,c});
                }

                pq.push({z,x});
            }else{
                pq.pop();
                ans+=x;
                z--;
                if(z>0){
                    pq.push({z,x});
                }
            }
            i++;
        }
        return ans;
    }
};