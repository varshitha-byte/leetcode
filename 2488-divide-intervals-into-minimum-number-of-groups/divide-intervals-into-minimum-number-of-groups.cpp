class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int g = 0;

        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i = 0; i < intervals.size(); i++) {
            int s = intervals[i][0];
            int e = intervals[i][1];

            if(!pq.empty() && pq.top() < s) {
                pq.pop();   // ⭐ important
            }
            else {
                g++;
            }

            pq.push(e);
        }

        return g;
    }
};
