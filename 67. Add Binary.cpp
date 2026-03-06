class Solution {
public:
    string addBinary(string a, string b) {
        string ketQua = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int nho = 0;
        
        while (i >= 0 || j >= 0 || nho > 0) {
            int tong = nho;
            if (i >= 0) tong += a[i--] - '0';
            if (j >= 0) tong += b[j--] - '0';
            
            ketQua.push_back((tong % 2) + '0');
            nho = tong / 2;
        }
        
        reverse(ketQua.begin(), ketQua.end());
        return ketQua;
    }
};