class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> hop;
        int max_bong = 0;
        
        for (int i = lowLimit; i <= highLimit; i++) {
            int tong = 0, x = i;
            while (x > 0) {
                tong += x % 10;
                x /= 10;
            }
            hop[tong]++;
            max_bong = max(max_bong, hop[tong]);
        }
        
        return max_bong;
    }
};