class Solution {
    public:
        string convertToTitle(int columnNumber) {
            string ketQua;
            
            while (columnNumber > 0) {
                columnNumber--; 
                char kyTu = 'A' + (columnNumber % 26);
                ketQua.push_back(kyTu);
                columnNumber /= 26;
            }
            
            reverse(ketQua.begin(), ketQua.end());
            return ketQua;
        }
    };