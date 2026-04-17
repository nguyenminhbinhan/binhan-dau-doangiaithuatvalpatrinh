class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string tu;
        vector<string> ds;
        
        while (ss >> tu) {
            if (tu.size() <= 2) {
                for (auto &c : tu) c = tolower(c);
            } else {
                tu[0] = tolower(tu[0]);
                for (int i = 1; i < tu.size(); i++) {
                    tu[i] = tolower(tu[i]);
                }
                tu[0] = toupper(tu[0]);
            }
            ds.push_back(tu);
        }
        
        string ket_qua;
        for (int i = 0; i < ds.size(); i++) {
            if (i > 0) ket_qua += " ";
            ket_qua += ds[i];
        }
        
        return ket_qua;
    }
};
