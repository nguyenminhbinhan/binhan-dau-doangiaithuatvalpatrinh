class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> loai(candyType.begin(), candyType.end());
        int so_loai = loai.size();
        int gioi_han = candyType.size() / 2;
        return min(so_loai, gioi_han);
    }
};