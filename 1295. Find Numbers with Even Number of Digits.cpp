class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int dem = 0;
        for (int x : nums) {
            int so_chu_so = 0;
            while (x > 0) {
                so_chu_so++;
                x /= 10;
            }
            if (so_chu_so % 2 == 0) dem++;
        }
        return dem;
    }
};