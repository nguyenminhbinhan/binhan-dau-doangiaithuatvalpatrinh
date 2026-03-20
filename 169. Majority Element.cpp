class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ungCuVien = 0, dem = 0;
        
        for (int x : nums) {
            if (dem == 0) {
                ungCuVien = x;
            }
            dem += (x == ungCuVien ? 1 : -1);
        }
        
        return ungCuVien;
    }
};