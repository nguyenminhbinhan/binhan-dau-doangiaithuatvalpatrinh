class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long ketQua = 0;
        for (char kyTu : columnTitle) {
            int val = kyTu - 'A' + 1;
            ketQua = ketQua * 26 + val;
        }
        return (int)ketQua;
    }
};