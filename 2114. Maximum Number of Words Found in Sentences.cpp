class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_tu = 0;
        for (auto &s : sentences) {
            int dem = 1; 
            for (char c : s) {
                if (c == ' ') dem++;
            }
            max_tu = max(max_tu, dem);
        }
        return max_tu;
    }
};
