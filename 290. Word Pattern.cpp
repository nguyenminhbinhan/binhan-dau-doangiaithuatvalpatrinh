class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> ds_tu;
        string tu;
        stringstream ss(s);
        while (ss >> tu) {
            ds_tu.push_back(tu);
        }
        
        if (ds_tu.size() != pattern.size()) return false;
        
        unordered_map<char, string> map_ky_tu;
        unordered_map<string, char> map_tu;
        
        for (int i = 0; i < pattern.size(); i++) {
            char ky_tu = pattern[i];
            string tu = ds_tu[i];
            
            if (map_ky_tu.count(ky_tu) && map_ky_tu[ky_tu] != tu) return false;
            if (map_tu.count(tu) && map_tu[tu] != ky_tu) return false;
            
            map_ky_tu[ky_tu] = tu;
            map_tu[tu] = ky_tu;
        }
        
        return true;
    }
};