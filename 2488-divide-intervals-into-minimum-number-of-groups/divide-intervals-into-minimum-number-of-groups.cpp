class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        priority_queue<int,vector<int>,greater<int>>pq;

        int g=0;

        for(auto i:intervals){
            int s=i[0];
            int e=i[1];

            if(pq.size()!=0 && pq.top()<s){
                pq.pop();
            }
            else{
                g++;
            }
            pq.push(e);
        }

        return g;
    }
};