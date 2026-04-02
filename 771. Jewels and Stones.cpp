class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> tap(jewels.begin(), jewels.end());
        int dem = 0;
        for (char c : stones) {
            if (tap.count(c)) dem++;
        }
        return dem;
    }
};