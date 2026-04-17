class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ket_qua = 0;
    
        for (int j = n - 1; j >= 0; j--) {
            if (colors[j] != colors[0]) {
                ket_qua = max(ket_qua, j);
                break;
            }
        }
       
        for (int i = 0; i < n; i++) {
            if (colors[i] != colors[n - 1]) {
                ket_qua = max(ket_qua, n - 1 - i);
                break;
            }
        }
        
        return ket_qua;
    }
};
