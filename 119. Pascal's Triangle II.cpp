class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> hang(rowIndex + 1, 0);
        hang[0] = 1;
        
        for (int i = 1; i <= rowIndex; i++) {
            for (int j = i; j > 0; j--) {
                hang[j] = hang[j] + hang[j - 1];
            }
        }
        
        return hang;
    }
};