class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> num(ratings.size(), 1);

        // Left -> Right
        // Handle: ratings[i] > ratings[i-1]
        for (int i = 1; i < num.size(); i++) {
            if (ratings[i] > ratings[i - 1]) {
                num[i] = num[i - 1] + 1;
            }
        }

        // Right -> Left
        // Handle: ratings[i] > ratings[i+1]
        for (int i = num.size() - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                if (num[i] <= num[i + 1]) {
                    num[i] = num[i + 1] + 1;
                }
            }
        }

        int sum = 0;

        for (int i = 0; i < num.size(); i++) {
            sum += num[i];
        }

        return sum;
    }
};