class Solution {
public:
    bool canPlaceFlowers(vector<int>& vuon, int n) {
        int m = vuon.size();
        for (int i = 0; i < m && n > 0; i++) {
            if (vuon[i] == 0) {
                int trai = (i == 0) ? 0 : vuon[i-1];
                int phai = (i == m-1) ? 0 : vuon[i+1];
                if (trai == 0 && phai == 0) {
                    vuon[i] = 1;
                    n--;
                }
            }
        }
        return n == 0;
    }
};