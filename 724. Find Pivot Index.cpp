class Solution {
public:
    int pivotIndex(vector<int>& mang) {
        int tong = 0;
        for (int x : mang) tong += x;
        
        int tong_trai = 0;
        for (int i = 0; i < mang.size(); i++) {
            if (tong_trai == tong - tong_trai - mang[i]) {
                return i;
            }
            tong_trai += mang[i];
        }
        
        return -1;
    }
};