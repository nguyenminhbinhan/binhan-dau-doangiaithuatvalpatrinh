class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> tap_banned(banned.begin(), banned.end());
        unordered_map<string,int> dem;
        
        // Chuyển về chữ thường và thay dấu câu bằng khoảng trắng
        for (char& c : paragraph) {
            if (isalpha(c)) {
                c = tolower(c);
            } else {
                c = ' ';
            }
        }
        
        stringstream ss(paragraph);
        string tu;
        string ket_qua;
        int max_dem = 0;
        
        while (ss >> tu) {
            if (!tap_banned.count(tu)) {
                dem[tu]++;
                if (dem[tu] > max_dem) {
                    max_dem = dem[tu];
                    ket_qua = tu;
                }
            }
        }
        
        return ket_qua;
    }
};