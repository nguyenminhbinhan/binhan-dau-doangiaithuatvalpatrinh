class Solution {
    public:
        int climbStairs(int n) {
            if (n == 1) return 1;
            if (n == 2) return 2;
            
            int truoc1 = 1, truoc2 = 2, ketQua = 0;
            
            for (int i = 3; i <= n; i++) {
                ketQua = truoc1 + truoc2;
                truoc1 = truoc2;
                truoc2 = ketQua;
            }
            
            return ketQua;
        }
    };