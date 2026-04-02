class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int so_0 = 0;
        
        // Đếm số 0 cần nhân đôi
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) so_0++;
        }
        
        // Duyệt ngược
        for (int i = n - 1; i >= 0; i--) {
            if (i + so_0 < n) {
                arr[i + so_0] = arr[i];
            }
            if (arr[i] == 0) {
                so_0--;
                if (i + so_0 < n) {
                    arr[i + so_0] = 0;
                }
            }
        }
    }
};