class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> dem(101, 0); // vì nums[i] <= 100
        for (int x : nums) {
            dem[x]++;
        }
        
        int tong = 0;
        for (int i = 1; i <= 100; i++) {
            if (dem[i] == 1) tong += i;
        }
        
        return tong;
    }
};98089 