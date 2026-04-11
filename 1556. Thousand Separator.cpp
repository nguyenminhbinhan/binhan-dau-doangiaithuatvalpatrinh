class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        string ket_qua;
        int dem = 0;
        
        for (int i = s.size() - 1; i >= 0; i--) {
            ket_qua.push_back(s[i]);
            dem++;
            if (dem % 3 == 0 && i != 0) {
                ket_qua.push_back('.');
            }
        }
        
        reverse(ket_qua.begin(), ket_qua.end());
        return ket_qua;
    }
};