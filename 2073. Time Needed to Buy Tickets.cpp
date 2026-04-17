class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int tong = 0;
        for (int i = 0; i < tickets.size(); i++) {
            if (i <= k) {
                tong += min(tickets[i], tickets[k]);
            } else {
                tong += min(tickets[i], tickets[k] - 1);
            }
        }
        return tong;
    }
};
