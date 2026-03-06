class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ketQua = 0;
        for (int x : nums) {
            ketQua ^= x;
        }
        return ketQua;
    }
};