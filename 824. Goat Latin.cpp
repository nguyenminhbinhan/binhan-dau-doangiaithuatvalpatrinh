class Solution {
public:
    string toGoatLatin(string sentence) {
        unordered_set<char> nguyen_am = {'a','e','i','o','u','A','E','I','O','U'};
        stringstream ss(sentence);
        string tu;
        string ket_qua;
        int chi_so = 1;
        
        while (ss >> tu) {
            if (nguyen_am.count(tu[0])) {
                tu += "ma";
            } else {
                tu = tu.substr(1) + tu[0] + "ma";
            }
            tu += string(chi_so, 'a');
            if (!ket_qua.empty()) ket_qua += " ";
            ket_qua += tu;
            chi_so++;
        }
        
        return ket_qua;
    }
};