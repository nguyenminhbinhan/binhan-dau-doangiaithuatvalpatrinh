class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (timeSeries.empty()) return 0;
        
        int tong = 0;
        for (int i = 1; i < timeSeries.size(); i++) {
            tong += min(duration, timeSeries[i] - timeSeries[i-1]);
        }
        tong += duration; // cộng thêm cho lần tấn công cuối cùng
        
        return tong;
    }
};