class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        int n = prices.size();

        for(int i = n-1; i >= 0; i--) {
            int curr = prices[i];

            while(!st.empty() && st.top() > curr) {
                st.pop();
            }

            if(!st.empty()) {
                prices[i] = curr - st.top();
            }

            st.push(curr);
        }

        return prices;
    }
};