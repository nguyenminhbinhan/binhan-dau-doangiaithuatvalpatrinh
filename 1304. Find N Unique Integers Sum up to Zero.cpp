class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ket_qua;
        for (int i = 1; i <= n / 2; i++) {
            ket_qua.push_back(i);
            ket_qua.push_back(-i);
        }
        if (n % 2 == 1) {
            ket_qua.push_back(0);
        }
        return ket_qua;
    }
};