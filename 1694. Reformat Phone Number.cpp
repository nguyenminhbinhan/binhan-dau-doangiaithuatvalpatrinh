class Solution {
public:
    string reformatNumber(string number) {
        string digits;
        for (char c : number) {
            if (isdigit(c)) digits.push_back(c);
        }
        
        vector<string> nhom;
        int i = 0;
        int n = digits.size();
        
        while (n - i > 4) {
            nhom.push_back(digits.substr(i, 3));
            i += 3;
        }
        
        if (n - i == 4) {
            nhom.push_back(digits.substr(i, 2));
            nhom.push_back(digits.substr(i+2, 2));
        } else {
            nhom.push_back(digits.substr(i));
        }
        
        string ket_qua;
        for (int j = 0; j < nhom.size(); j++) {
            if (j > 0) ket_qua.push_back('-');
            ket_qua += nhom[j];
        }
        
        return ket_qua;
    }
};