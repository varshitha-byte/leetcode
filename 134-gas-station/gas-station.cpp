class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int startidx = 0;
        int f = 0;

        int sg = 0, cg = 0;
        for (int i = 0; i < gas.size(); i++) {
            sg += gas[i];
            cg += cost[i];
        }

        if (sg < cg) {
            return -1;
        }
        for (int i = 0; i < gas.size(); i++) {
            int g = gas[i] - cost[i];
            f += g;
            if (f < 0) {
                f = 0;
                startidx = i + 1;
            }
        }
        if (f < 0) {
            return -1;
        }
        return startidx;
    }
};