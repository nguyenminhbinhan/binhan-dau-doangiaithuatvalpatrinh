class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minGia = INT_MAX;
        int loiNhuanMax = 0;
        
        for (int gia : prices) {
            if (gia < minGia) {
                minGia = gia;
            } else {
                loiNhuanMax = max(loiNhuanMax, gia - minGia);
            }
        }
        
        return loiNhuanMax;
    }
};