class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& mang) {
        int n = mang.size();
        
        for (int i = 0; i < n; i++) {
            int chi_so = abs(mang[i]) - 1;
            if (mang[chi_so] > 0) {
                mang[chi_so] = -mang[chi_so];
            }
        }
        
        vector<int> ket_qua;
        for (int i = 0; i < n; i++) {
            if (mang[i] > 0) {
                ket_qua.push_back(i + 1);
            }
        }
        
        return ket_qua;
    }
};